<h2><a href="https://codeforces.com/contest/1140/problem/B" target="_blank" rel="noopener noreferrer">1140B — Good String</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1140B](https://codeforces.com/contest/1140/problem/B) |

## Topics
`implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">B. Good String</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You have a string $$$s$$$ of length $$$n$$$ consisting of only characters <span class="tex-font-style-tt">></span> and <span class="tex-font-style-tt"><</span>. You may do some operations with this string, for each operation you have to choose some character that still remains in the string. If you choose a character <span class="tex-font-style-tt">></span>, the character that comes right after it is deleted (if the character you chose was the last one, nothing happens). If you choose a character <span class="tex-font-style-tt"><</span>, the character that comes right before it is deleted (if the character you chose was the first one, nothing happens).</p><p>For example, if we choose character <span class="tex-font-style-tt">></span> in string <span class="tex-font-style-tt">> <span class="tex-font-style-bf">></span> < ></span>, the string will become to <span class="tex-font-style-tt">> > ></span>. And if we choose character <span class="tex-font-style-tt"><</span> in string <span class="tex-font-style-tt">> <span class="tex-font-style-bf"><</span></span>, the string will become to <span class="tex-font-style-tt"><</span>.</p><p>The string is good if there is a sequence of operations such that after performing it only one character will remain in the string. For example, the strings <span class="tex-font-style-tt">></span>, <span class="tex-font-style-tt">> ></span> are good. </p><p><span class="tex-font-style-bf">Before applying the operations</span>, you may remove any number of characters from the given string (possibly none, possibly up to $$$n - 1$$$, but not the whole string). You need to calculate the minimum number of characters to be deleted from string $$$s$$$ so that it becomes good.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 100$$$) – the number of test cases. Each test case is represented by two lines.</p><p>The first line of $$$i$$$-th test case contains one integer $$$n$$$ ($$$1 \le n \le 100$$$) – the length of string $$$s$$$.</p><p>The second line of $$$i$$$-th test case contains string $$$s$$$, consisting of only characters <span class="tex-font-style-tt">></span> and <span class="tex-font-style-tt"><</span>.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print one line.</p><p>For $$$i$$$-th test case print the minimum number of characters to be deleted from string $$$s$$$ so that it becomes good.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005605122368279737" id="id004340774115966982" class="input-output-copier">Copy</div></div><pre id="id005605122368279737">3
2
<>
3
><<
1
>
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0017632386763872254" id="id0003718510852383239" class="input-output-copier">Copy</div></div><pre id="id0017632386763872254">1
0
0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case we can delete any character in string <span class="tex-font-style-tt"><></span>.</p><p>In the second test case we don't need to delete any characters. The string <span class="tex-font-style-tt">> < <</span> is good, because we can perform the following sequence of operations: <span class="tex-font-style-tt">> <span class="tex-font-style-bf"><</span> <</span> $$$\rightarrow$$$ <span class="tex-font-style-tt">< <span class="tex-font-style-bf"><</span></span> $$$\rightarrow$$$ <span class="tex-font-style-tt"><</span>.</p></div>