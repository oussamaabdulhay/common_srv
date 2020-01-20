# common_srv

This is a guide on how to use the common_srv

## Cloning The Rep

Clone this repository to a catkin workspace and built it using catkin_make

## Configuring your CMakeLists & package.xml

To use the services in a package, open the package CmakeLists.txt and add the following:

**CMakeLists.txt**

* Add "common_srv" to "find_package"
* Add "common_srv" to "catkin_package"
* Add "include_directories(include ${catkin_INCLUDE_DIRS})"
* If you placed the package in the same workspace as your other packages, add "add_dependencies("YOUR NODE NAME" ${catkin_EXPORTED_TARGETS})

**package.xml**

* Add "<build_depend>common_srv</build_depend>"
* Add "<exec_depend>common_srv</exec_depend>"

## Identifying The Required RosUnits

To Use the needed ROSUnits, check the required "Message/Service" from the interface document (IFD) and copy the correspoinding header and source files to your package directory.
For every ROSUnit associated with a "Message/Service" there should be two Classes, a class ending with the "Clnt" suffix, and a class ending with the "Srv" suffix.
As the names imply, the Clnt will be used on the client node, and the Srv will be used on the Service Node.
The needed ROSUnit might depend on other classes, make sure to copy all required header and source files.

## Utilizing The ROSUnits

After succefully copying the needed ROSUnit, follow these steps:

1. Rename the ROSUnit class name to match 2nd part of the "Channel Name" found in the IFD, for example: while creating a ROSUnit server for the "UAV Control" that "set_hover_point", the needed Service type is "common_srv::set_pose", and the corresponding ROSUnit is "ROSUnit_SetPoseSrv". The class hence should be renamed to "ROSUnit_SetHoverPointSrv".

2. Change the default recevied/emitted messages to better align with your need. For example: The "ROSUnit_UploadUAVFirePathClnt" expect a "IntegerMsg" by defualt, this can be changed to "FireTagMsg" to ease the ROSUnit integration.

3. Change the defaule impelementation of the "receive_msg_data" or "srv_callback" functions to better suite your code. Following on the previous example, "ROSUnit_UploadUAVFirePathSrv" should take the data from the "common_srv::set_int::req" and give it to the "FireTagMsg".

## Important Conventions To Follow

* Each Sheet in the IFD should be associated with a unique rospack.

* All of the topics/services listed in the IFD should belong to a single node.

* When passing the service name as an argument, please copy the exact name listed under "Channel Name" found in the IFD. 
