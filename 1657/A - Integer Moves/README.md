<h2><a href="https://codeforces.com/contest/1657/problem/A" target="_blank" rel="noopener noreferrer">1657A — Integer Moves</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1657A](https://codeforces.com/contest/1657/problem/A) |

## Topics
`brute force` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Integer Moves</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There's a chip in the point $$$(0, 0)$$$ of the coordinate plane. In one operation, you can move the chip from some point $$$(x_1, y_1)$$$ to some point $$$(x_2, y_2)$$$ if the Euclidean distance between these two points is an <span class="tex-font-style-bf">integer</span> (i.e. $$$\sqrt{(x_1-x_2)^2+(y_1-y_2)^2}$$$ is integer).</p><p>Your task is to determine the minimum number of operations required to move the chip from the point $$$(0, 0)$$$ to the point $$$(x, y)$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 3000$$$) — number of test cases.</p><p>The single line of each test case contains two integers $$$x$$$ and $$$y$$$ ($$$0 \le x, y \le 50$$$) — the coordinates of the destination point.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print one integer — the minimum number of operations required to move the chip from the point $$$(0, 0)$$$ to the point $$$(x, y)$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006719750820189265" id="id0011620301585068837" class="input-output-copier">Copy</div></div><pre id="id006719750820189265"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">8 6</div><div class="test-example-line test-example-line-even test-example-line-2">0 0</div><div class="test-example-line test-example-line-odd test-example-line-3">9 15</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008954556559385529" id="id0029727273479484195" class="input-output-copier">Copy</div></div><pre id="id008954556559385529">1
0
2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, one operation $$$(0, 0) \rightarrow (8, 6)$$$ is enough. $$$\sqrt{(0-8)^2+(0-6)^2}=\sqrt{64+36}=\sqrt{100}=10$$$ is an integer.</p><p>In the second example, the chip is already at the destination point.</p><p>In the third example, the chip can be moved as follows: $$$(0, 0) \rightarrow (5, 12) \rightarrow (9, 15)$$$. $$$\sqrt{(0-5)^2+(0-12)^2}=\sqrt{25+144}=\sqrt{169}=13$$$ and $$$\sqrt{(5-9)^2+(12-15)^2}=\sqrt{16+9}=\sqrt{25}=5$$$ are integers.</p></div>