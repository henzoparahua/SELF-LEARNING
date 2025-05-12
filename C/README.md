# EDG C

[](https://edube.org/study/catalog/c-essentials-part-1-basics/my-progress)

## Starting

IDE (Integrated Development Environment): is a software application that typically consists of a code editor, a compiler, a debugger, and a graphical user interface (GUI) builder. An IDE gives you a comfortable desk equipped with all means, supplies and aids.

## Human and Programming Languages

Language is a tool for expressing and recording human thoughts—a mechanism that allows us to understand and be understood. Our native language, or mother tongue, accompanies us throughout our lives, learned naturally from our earliest days.

Some languages, however, were deliberately created to serve specific needs, with their development overseen by international committees and working groups. While these languages are defined by international standards and understood by many people, they weren't designed primarily for human communication.

A programming language follows strict rules that are more rigid than natural languages. These rules define three key elements that shape how code is written: lexicon, syntax, and semantics.

- The lexicon defines the allowed symbols, such as letters, digits, and punctuation marks.
- Syntax sets the rules for how these symbols can be combined.
- Semantics establishes what statements mean and how they're interpreted.

For a program to work properly, it must be correct in all three aspects—lexical, syntactic, and semantic. Unlike natural languages, programming languages have limited expressive power, which is why encoding something like a declaration of love would be challenging.

Even the most technically sophisticated computer has no true intelligence. It merely follows a predetermined set of commands. These commands are very basic—like "take this number, add it to another, and store the result." This complete set of commands is called an instruction list, or IL.

While it's possible to program computers directly in machine language using basic instructions, this approach is tedious, time-consuming, and error-prone. In the early days of computing, this was the only programming method available, and its limitations quickly became apparent.

These challenges created the need for a bridge between human language and computer language. This bridge took the form of an intermediate language that both humans and computers could understand, now known as high-level programming languages.

### Compilation

How do computers understand programs written in high-level languages? Through translation: programs are converted into machine language. Computers perform this translation—called compilation—quickly and efficiently. This process enables portability since the same code can be translated for different machines.

Let's explore how to create a program. The first step is writing program instructions following the rules of your chosen programming language. This written instruction set is called the source code (or "source") and is stored in a source file.

Source code requires a basic text editor that handles plain text without formatting. Save your code in a file with a name that reflects its contents. For C programs, use the ".c" extension, for example, "source.c".

After writing the code, it needs compilation. You'll run a compiler, which translates your source code into machine language. The compiler analyzes your code thoroughly and checks for errors. Though this analysis is comprehensive, it's purely mechanical—the compiler can flag errors but can't understand your intentions or suggest improvements. It's simply a translation tool.

If the compiler finds no errors, it creates an executable file—your program in machine language. The executable's name varies by system: Unix/Linux compilers typically create "a.out" by default, while Windows compilers use your source filename with an ".exe" extension.

## Hello World

In the C programming language, every program must contain a special block called `main`. This block serves as the program's entry point—without it, the program cannot run. Functions (including main) require three key pieces of information:

- What value the function returns
- The function's name
- What parameters the function accepts and their names

A function prototype is a set of information that describes a function, acting like a label that shows how to use it in a program. The prototype doesn't explain the function's purpose. The function's actual code, called the body, is written between opening and closing curly braces ({ and }).

Let's look at an example of a function that does nothing at all:

```c
void func(void) { }
```

So, let’s show some basic rules in practice.

```c
#include <stdio.h>

int main (void)
{
		puts("Ohayo Worldo");
		return 0;
}
```

Let's start with the `#` (hash) symbol at the beginning. This symbol indicates a preprocessor directive—a special instruction handled by a distinct part of the compiler. The preprocessor reads and modifies the program text before the main compilation begins, which is why it has the prefix "pre."

These directives control the preprocessor's actions. In our example, we're using the `include` directive. When the preprocessor finds this directive, it substitutes it with the contents of the specified file (in this case, `stdio.h`). The preprocessor makes these changes on a temporary copy of your program—your original source file remains untouched and the temporary copy is discarded after compilation.

Why do we need the preprocessor to include the file `stdio.h`? We're using it as a building block that contains ready-made components, specifically to display text on the screen. Without this file, the compiler wouldn't recognize "`puts`" as a valid function name. This essential information comes from files that end with "`.h`" (header files).
