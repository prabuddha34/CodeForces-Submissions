<h2><a href="https://codeforces.com/contest/1646/problem/A" target="_blank" rel="noopener noreferrer">1646A — Square Counting</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1646A](https://codeforces.com/contest/1646/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. Square Counting</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Luis has a sequence of $$$n+1$$$ integers $$$a_1, a_2, \ldots, a_{n+1}$$$. For each $$$i = 1, 2, \ldots, n+1$$$ it is guaranteed that $$$0\leq a_i  \lt  n$$$, or $$$a_i=n^2$$$. He has calculated the sum of all the elements of the sequence, and called this value $$$s$$$. </p><p>Luis has lost his sequence, but he remembers the values of $$$n$$$ and $$$s$$$. Can you find the number of elements in the sequence that are equal to $$$n^2$$$?</p><p>We can show that the answer is unique under the given constraints.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 2\cdot 10^4$$$). Description of the test cases follows.</p><p>The only line of each test case contains two integers $$$n$$$ and $$$s$$$ ($$$1\le n \lt  10^6$$$, $$$0\le s \le 10^{18}$$$). It is guaranteed that the value of $$$s$$$ is a valid sum for some sequence satisfying the above constraints.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print one integer — the number of elements in the sequence which are equal to $$$n^2$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006247238680494871" id="id006068770371449168" class="input-output-copier">Copy</div></div><pre id="id006247238680494871"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">7 0</div><div class="test-example-line test-example-line-even test-example-line-2">1 1</div><div class="test-example-line test-example-line-odd test-example-line-3">2 12</div><div class="test-example-line test-example-line-even test-example-line-4">3 12</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005881225884660412" id="id006815258456201005" class="input-output-copier">Copy</div></div><pre id="id005881225884660412">0
1
3
1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, we have $$$s=0$$$ so all numbers are equal to $$$0$$$ and there isn't any number equal to $$$49$$$.</p><p>In the second test case, we have $$$s=1$$$. There are two possible sequences: $$$[0, 1]$$$ or $$$[1, 0]$$$. In both cases, the number $$$1$$$ appears just once. </p><p>In the third test case, we have $$$s=12$$$, which is the maximum possible value of $$$s$$$ for this case. Thus, the number $$$4$$$ appears $$$3$$$ times in the sequence.</p></div>