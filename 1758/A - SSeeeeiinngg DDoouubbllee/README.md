<h2><a href="https://codeforces.com/contest/1758/problem/A" target="_blank" rel="noopener noreferrer">1758A — SSeeeeiinngg DDoouubbllee</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1758A](https://codeforces.com/contest/1758/problem/A) |

## Topics
`constructive algorithms` `strings`

---

## Problem Statement

<div class="header"><div class="title">A. SSeeeeiinngg DDoouubbllee</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A <span class="tex-font-style-it">palindrome</span> is a string that reads the same backward as forward. For example, the strings $$$\texttt{z}$$$, $$$\texttt{aaa}$$$, $$$\texttt{aba}$$$, and $$$\texttt{abccba}$$$ are palindromes, but $$$\texttt{codeforces}$$$ and $$$\texttt{ab}$$$ are not.</p><p>The <span class="tex-font-style-it">double</span> of a string $$$s$$$ is obtained by writing each character twice. For example, the double of $$$\texttt{seeing}$$$ is $$$\texttt{sseeeeiinngg}$$$.</p><p>Given a string $$$s$$$, rearrange its double to form a palindrome. Output the rearranged string. It can be proven that such a rearrangement always exists.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of input contains $$$t$$$ ($$$1 \leq t \leq 1000$$$) — the number of test cases.</p><p>The only line of each test case contains a single string $$$s$$$ ($$$1 \leq |s| \leq 100$$$) consisting only of lowercase English letters.</p><p>Note that the sum of $$$|s|$$$ over all test cases is not bounded.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a palindromic string of length $$$2 \cdot |s|$$$ that is a rearrangement of the double of $$$s$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005890821255623913" id="id005875429652077635" class="input-output-copier">Copy</div></div><pre data-content="4
a
sururu
errorgorn
anutforajaroftuna
" id="id005890821255623913"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">a</div><div class="test-example-line test-example-line-even test-example-line-2">sururu</div><div class="test-example-line test-example-line-odd test-example-line-3">errorgorn</div><div class="test-example-line test-example-line-even test-example-line-4">anutforajaroftuna</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00029629570581901632" id="id00818673304905526" class="input-output-copier">Copy</div></div><pre id="id00029629570581901632">aa
suurruurruus
rgnororerrerorongr
aannuuttffoorraajjaarrooffttuunnaa
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the double of $$$\texttt{a}$$$ is $$$\texttt{aa}$$$, which is already a palindrome.</p><p>In the second test case, the double of $$$\texttt{sururu}$$$ is $$$\texttt{ssuurruurruu}$$$. If we move the first $$$\texttt{s}$$$ to the end, we get $$$\texttt{suurruurruus}$$$, which is a palindrome.</p><p>In the third test case, the double of $$$\texttt{errorgorn}$$$ is $$$\texttt{eerrrroorrggoorrnn}$$$. We can rearrange the characters to form $$$\texttt{rgnororerrerorongr}$$$, which is a palindrome.</p></div>