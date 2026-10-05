<h2><a href="https://codeforces.com/contest/1691/problem/A" target="_blank" rel="noopener noreferrer">1691A — Beat The Odds</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1691A](https://codeforces.com/contest/1691/problem/A) |

## Topics
`brute force` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Beat The Odds</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Given a sequence $$$a_1, a_2, \ldots, a_n$$$, find the minimum number of elements to remove from the sequence such that after the removal, the sum of every $$$2$$$ consecutive elements is even.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases. Description of the test cases follows.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$3 \le n \le 10^5$$$).</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2,\dots,a_n$$$ ($$$1\leq a_i\leq10^9$$$) — elements of the sequence.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print a single integer — the minimum number of elements to remove from the sequence such that the sum of every $$$2$$$ consecutive elements is even.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003462029678096743" id="id008661810729378793" class="input-output-copier">Copy</div></div><pre id="id003462029678096743"><div class="test-example-line test-example-line-even test-example-line-0">2</div><div class="test-example-line test-example-line-odd test-example-line-1">5</div><div class="test-example-line test-example-line-odd test-example-line-1">2 4 3 6 8</div><div class="test-example-line test-example-line-even test-example-line-2">6</div><div class="test-example-line test-example-line-even test-example-line-2">3 5 9 7 1 3</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005053513658275232" id="id0018181659135199102" class="input-output-copier">Copy</div></div><pre id="id005053513658275232">1
0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, after removing $$$3$$$, the sequence becomes $$$[2,4,6,8]$$$. The pairs of consecutive elements are $$$\{[2, 4], [4, 6], [6, 8]\}$$$. Each consecutive pair has an even sum now. Hence, we only need to remove $$$1$$$ element to satisfy the condition asked.</p><p>In the second test case, each consecutive pair already has an even sum so we need not remove any element.</p></div>