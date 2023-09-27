# myString project
this name is temporary, soon the name will change.
<hr>
welcome to my project! this project has a goal to help beginners with strings, because strings in c are not simple for who is starting. In c, we need a lot of functions to create a simple string, and it's har for begginers.
<h1>Why am i starting this project?</h1>
Me, when I din't starded to learn c, I was learning java(a high level programming language) because i was new in coding and I din't know what language to start(and I love java, because of its portability). Now, I decided to be a low-level developer, because I wanted to be a computer engineer, and this area of engineering include high experience of math and low level programming. <br>
And when saw the strings in c, it was a horrible experience(today, I have more experience about it), so I thought about the beginners, and I though <i>"wow, how har it would be for c begginers!"</i>, and the idea for this project came up, and the <strong>CS50</strong> library inspired me to create this project.
<h1>How it works?</h1>
In the <a href="https://github.com/Lucasdaniel314/myString/blob/main/myString.h">myString.h</a> file, there is a enum called <strong>Type</strong> and a typedef struct, this struct is the string itself.
<br> the <i>Type</i> defines what a string is and what is its max lenght of characters. Follow the table types below:
<table>
  <tr>
    <th>Type</th>
    <th>max lenght</th>
  </tr>
  <tr>
    <th><strong>LITTLE</strong></th>
    <th>255 chars</th>
  </tr>
  <tr>
    <th><strong>MEDIUM</strong></th>
    <th>500 chars</th>
  </tr>
  <tr>
    <th><strong>BIG</strong></th>
    <th>1000 chars</th>
  </tr>
  <tr>
    <th><strong>GIANT</strong></th>
    <th>2000 chars</th>
  </tr>
</table>
C will never allow us to 
<code>
string str = "hi mom!";
str = "hi mom again!";
print(str);
</code>
but myString can make it easier for begginers, like:
<code>
string str = createString(LITTLE, "hi mom!");
changeValue(str, "hi mom again!");
prints(str);
</code>
in pure c code, it will look like:
<code>
char str[] = "hi mom!";
str[6] = ' ';
strcat(str, "again!");
printf("%s\n", str);
</code>
<h1>Can I use it now?</h1>
No, you can't. This project still in development, and it doesn't has a preview version yet, so you need to wait it be released or you can help me to build this project!
<h1>Who is this project aimed at?</h1>
Not just for begginers, but it can help for real c projects.
<h1>What do it need yet?</h1>
<strong>A lot of stuff!</strong> I need help to make this project, and it need be perfect to me release it.
<h1>Where are you building this project?</h1>
I'm building it in linux mint distro, but this project need be a non-dependent OS.
<h1>Will you accept my pull request?</h1>
if this pull request work normally in this project, i can accept your pull request. But you also need to document your pull request.
<h1>Will this project allways be open-source?</h1>
accordingly with the GNU GPL, yes, it will be.
<h1>Can I help you?</h1>
<strong>YES, PLEASE, YES!</strong> you're welcome to help me for this project.
<h1>I need a especific OS for building it?</h1>
No, you can build it in Windows, Linux and macOS.
<h1>farewell</h1>
welcome to my project!
