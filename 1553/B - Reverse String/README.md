<h2><a href="https://codeforces.com/contest/1553/problem/B" target="_blank" rel="noopener noreferrer">1553B — Reverse String</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1553B](https://codeforces.com/contest/1553/problem/B) |

## Topics
`brute force` `dp` `hashing` `implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">B. Reverse String</div><div class="time-limit"><div class="property-title">time limit per test</div>3 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You have a string $$$s$$$ and a chip, which you can place onto any character of this string. </p><p>After placing the chip, you move it to the right several (maybe zero) times, i. e. you perform the following operation several times: if the current position of the chip is $$$i$$$, you move it to the position $$$i + 1$$$. Of course, moving the chip to the right is impossible if it is already in the last position.</p><p>After moving the chip to the right, you move it to the left several (maybe zero) times, i. e. you perform the following operation several times: if the current position of the chip is $$$i$$$, you move it to the position $$$i - 1$$$. Of course, moving the chip to the left is impossible if it is already in the first position.</p><p>When you place a chip or move it, you write down the character where the chip ends up after your action. For example, if $$$s$$$ is <span class="tex-font-style-tt">abcdef</span>, you place the chip onto the $$$3$$$-rd character, move it to the right $$$2$$$ times and then move it to the left $$$3$$$ times, you write down the string <span class="tex-font-style-tt">cdedcb</span>.</p><p>You are given two strings $$$s$$$ and $$$t$$$. Your task is to determine whether it's possible to perform the described operations with $$$s$$$ so that you write down the string $$$t$$$ as a result.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$q$$$ ($$$1 \le q \le 500$$$) — the number of test cases.</p><p>Each test case consists of two lines. The first line contains the string $$$s$$$ ($$$1 \le |s| \le 500$$$), the second line contains the string $$$t$$$ ($$$1 \le |t| \le 2 \cdot |s| - 1$$$). Both strings consist of lowercase English characters.</p><p>It is guaranteed that the sum of $$$|s|$$$ over all test cases does not exceed $$$500$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print "<span class="tex-font-style-tt">YES</span>" if you can obtain the string $$$t$$$ by performing the process mentioned in the statement with the string $$$s$$$, or "<span class="tex-font-style-tt">NO</span>" if you cannot.</p><p>You may print each letter in any case (<span class="tex-font-style-tt">YES</span>, <span class="tex-font-style-tt">yes</span>, <span class="tex-font-style-tt">Yes</span> will all be recognized as positive answer, <span class="tex-font-style-tt">NO</span>, <span class="tex-font-style-tt">no</span> and <span class="tex-font-style-tt">nO</span> will all be recognized as negative answer).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007314091097582879" id="id008934418400693815" class="input-output-copier">Copy</div></div><pre id="id007314091097582879">6
abcdef
cdedcb
aaa
aaaaa
aab
baaa
ab
b
abcdef
abcdef
ba
baa
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00760993316211966" id="id007302110934527639" class="input-output-copier">Copy</div></div><pre id="id00760993316211966">YES
YES
NO
YES
YES
NO
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Consider the examples.</p><p>The first test case is described in the statement.</p><p>In the second test case, you can place the chip on the $$$1$$$-st position, move it twice to the right, and then move it twice to the left.</p><p>In the fourth test case, you can place the chip on the $$$2$$$-nd position, and then don't move it at all.</p><p>In the fifth test case, you can place the chip on the $$$1$$$-st position, move it $$$5$$$ times to the right, and then finish the process.</p></div>