<h2><a href="https://codeforces.com/contest/1325/problem/B" target="_blank" rel="noopener noreferrer">1325B — CopyCopyCopyCopyCopy</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1325B](https://codeforces.com/contest/1325/problem/B) |

## Topics
`greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">B. CopyCopyCopyCopyCopy</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Ehab has an array $$$a$$$ of length $$$n$$$. He has just enough free time to make a new array consisting of $$$n$$$ copies of the old array, written back-to-back. What will be the length of the new array's longest increasing subsequence?</p><p>A sequence $$$a$$$ is a subsequence of an array $$$b$$$ if $$$a$$$ can be obtained from $$$b$$$ by deletion of several (possibly, zero or all) elements. The longest increasing subsequence of an array is the longest subsequence such that its elements are ordered in strictly increasing order.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ — the number of test cases you need to solve. The description of the test cases follows.</p><p>The first line of each test case contains an integer $$$n$$$ ($$$1 \le n \le 10^5$$$) — the number of elements in the array $$$a$$$.</p><p>The second line contains $$$n$$$ space-separated integers $$$a_1$$$, $$$a_2$$$, $$$\ldots$$$, $$$a_{n}$$$ ($$$1 \le a_i \le 10^9$$$) — the elements of the array $$$a$$$.</p><p><span class="tex-font-style-bf">The sum of $$$n$$$ across the test cases doesn't exceed $$$10^5$$$.</span></p></div><div class="output-specification"><div class="section-title">Output</div><p>For each testcase, output the length of the longest increasing subsequence of $$$a$$$ if you concatenate it to itself $$$n$$$ times.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009492041296880283" id="id006925112128460019" class="input-output-copier">Copy</div></div><pre id="id009492041296880283">2
3
3 2 1
6
3 1 4 1 5 9
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003482922035185978" id="id007520850800187856" class="input-output-copier">Copy</div></div><pre id="id003482922035185978">3
5
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first sample, the new array is $$$[3,2,\textbf{1},3,\textbf{2},1,\textbf{3},2,1]$$$. The longest increasing subsequence is marked in bold.</p><p>In the second sample, the longest increasing subsequence will be $$$[1,3,4,5,9]$$$.</p></div>