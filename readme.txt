Steps to run the Assignment Program:
1.Extract the contents of NairA3.zip onto a location using Winrar or 7zip. 
2.The folder myrpcf1 is the one which contains programs.

1.Log into Machine sl253-rrpc01.cs.iupui.edu - 10.234.140.27:
1.1.Go into the extracted folder using cd NairA3 command on pegasus. 
1.2.On pegasus, using cd myrpcf1 to go into the directory of myrpcf1.
1.3.Type chmod +x server.sh to give permission.
1.4.Type chmod +x rpcf1_server to give permission.
1.5.Type ./server.sh to run the script file.
1.6.If any error is thrown then: 
  1.7.1 Type ./rpcf1_server and press enter.
1.8.The server will be running on machine 10.234.140.27.

2.Log into Machine sl253-rrpc02.cs.iupui.edu - 10.234.140.28
2.1.Go into the extracted folder using cd NairA3 command on pegasus. 
2.2.On pegasus, using cd myrpcf1 to go into the directory of myrpcf1.
2.3.Type chmod +x client27.sh to give permission.
2.4.Type chmod +x rpcf1_client to give permission.
2.5.Type ./client27.sh to run the script file.
2.6.If any error is thrown then: 
  2.6.1 Type ./rpcf1_client 10.234.140.28
2.7.The client 1 will be on machine 10.234.140.28.

3.Log into Machine sl253-rrpc02.cs.iupui.edu - 10.234.140.29
3.1.Go into the extracted folder using cd NairA3 command on pegasus. 
3.2.On pegasus, using cd myrpcf1 to go into the directory of myrpcf1.
3.3.Type chmod +x client27.sh to give permission.
3.4.Type chmod +x rpcf1_client to give permission.
3.5.Type ./client27.sh to run the script file.
3.6.If any error is thrown then: 
  3.6.1 Type ./rpcf1_client 10.234.140.29
3.7.The client 1 will be on machine 10.234.140.29.

4.All the 3 programs must be running side by side and the server must run first.
5.On the client, enter the option number of the function you want to call on the server.
6.Input accordingly as given in the console instructions.
7.You can cross verify the cases given in the report(Refer Documentation/Report)

To change machines for doublecheck:
1.The client can be run on all except the machine on which the server is running.
2.The server can be run on any other machine except the one on which the server is running.(otherwise change to localhost)
3.If you are running server on machine 10.234.140.28 then run the file client28.sh as in step 2 (2.4).
4.Hence you will find the files client27.sh, client28.sh,....,client32.sh .This is done for convenience.

Note:
1.I initially made the rpcf1.x file and typed the command rpcgen -a -C rpcf1.x
2.Then after editing the rpcf1_client.c and rpcf1_server.c files I ran the command make -f Makefile.rpcf1 which then compiled the code.
3.After that I ran the programs as per Step 1, Step 2 and Step 3.
4.You can run more clients by following step 2 or 3 and be sure to run on different machines.

Contents of the Folder NairA2:
1.Upon unzipping or extracting NairA2 folder we can see the 3 folders namely myrpcf1, Results and Screenshots and the DC Assignment 3 Report Arvind Nair.docx and DC Assignment 3 Report Arvind Nair.pdf which is the project report in word and pdf formats and finally the readme.txt.
2.The rpcf1 folder contains the program files.
3.The Results folder contains the results for the following cases:
3.1 resultcase1.txt: It contains the case where the user types the wrong credentials.
3.2 resultcase2.txt: It contains the case where the specified file does not exist.
3.3 resultcase3.txt: It contains the case where the file transfer is successful.
4.The Screenshots folder contains the outputs in png format for the 3 Cases.
4.1 Note: As the case 1 output was big I had to take 2 screenshots and divide into two parts.

