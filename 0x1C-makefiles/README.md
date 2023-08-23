#What are make, Makefiles

Make is a tool that automates the build process for software projects. It is a command-line utility that reads a text file called a Makefile and executes the commands that are specified in it.

A Makefile is a text file that contains instructions for the make utility. It is typically divided into two sections: the target section and the dependency section. The target section specifies the tasks that need to be executed, and the dependency section specifies the files that need to be created or updated before each task can be executed.

For example, the following Makefile defines a task to compile the source code in the current directory and create an executable file called myprog:

target: myprog

myprog: main.c
    gcc main.c -o myprog
The first line of the Makefile specifies the target, which is the task to be executed. The second line specifies the dependency, which is the file that needs to be created or updated before the task can be executed. In this case, the dependency is the file main.c.

The make utility will first check if the file myprog exists. If it does not exist, the make utility will execute the command gcc main.c -o myprog to compile the source code and create the executable file.

Once the executable file is created, the make utility will exit.

##When, why and how to use Makefiles

Makefiles can be used to automate the build process for complex software projects. They can also be used to make it easier to track changes to the source code and to ensure that the software is always built in the same way.

Makefiles are typically used in conjunction with version control systems, such as Git or Mercurial. This allows you to track changes to the Makefile itself, as well as the files that it depends on.

To use a Makefile, you first need to create it. The Makefile should be placed in the same directory as the files that it depends on.

Once the Makefile is created, you can use the make command to build the software. The make command will read the Makefile and execute the commands that are specified in it.

##What are rules and how to set and use them

A rule in a Makefile is a set of instructions that tells the make utility how to build a target file. The target file is the file that the rule is trying to build.

The rule is typically made up of three parts: the target, the dependencies, and the commands. The target is the file that the rule is trying to build. The dependencies are the files that the target file depends on. The commands are the commands that need to be executed to build the target file.

For example, the following rule defines a rule to build the file myprog:

myprog: main.c
    gcc main.c -o myprog
The target in this rule is the file myprog. The dependency in this rule is the file main.c. The command in this rule is the command gcc main.c -o myprog.

##What are explicit and implicit rules
There are two types of rules in Makefiles: explicit rules and implicit rules. Explicit rules are rules that are explicitly defined in the Makefile. Implicit rules are rules that are defined by the make utility itself.

Explicit rules are more powerful than implicit rules, but they are also more complex. Implicit rules are simpler, but they are less flexible.

##What are the most common / useful rules
The most common rules in Makefiles are the following:

The all rule: This rule is used to build all of the target files in the Makefile.
The clean rule: This rule is used to remove all of the generated files in the Makefile.
The install rule: This rule is used to install the target files in a specific location.
What are variables and how to set and use them
Variables in Makefiles are used to store values that can be used in the rules. Variables are defined using the variable = value syntax.

For example, the following variable defines a variable called CC that stores the value of the C compiler:

CC = gcc
Variables can be used in the rules by using the $variable syntax. For example, the following rule uses the CC variable to specify the C compiler:

myprog: main.c
    $(CC) main.c -o myprog
