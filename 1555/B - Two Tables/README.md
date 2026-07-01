<h2><a href="https://codeforces.com/contest/1555/problem/B" target="_blank" rel="noopener noreferrer">1555B — Two Tables</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1555B](https://codeforces.com/contest/1555/problem/B) |

## Topics
`brute force`

---

## Problem Statement

<div class="header"><div class="title">B. Two Tables</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You have an axis-aligned rectangle room with width $$$W$$$ and height $$$H$$$, so the lower left corner is in point $$$(0, 0)$$$ and the upper right corner is in $$$(W, H)$$$.</p><p>There is a rectangular table standing in this room. The sides of the table are parallel to the walls, the lower left corner is in $$$(x_1, y_1)$$$, and the upper right corner in $$$(x_2, y_2)$$$.</p><p>You want to place another rectangular table in this room with width $$$w$$$ and height $$$h$$$ with the width of the table parallel to the width of the room.</p><p>The problem is that sometimes there is not enough space to place the second table without intersecting with the first one (there are no problems with tables touching, though).</p><p>You <span class="tex-font-style-bf">can't rotate</span> any of the tables, but you can move the first table inside the room. </p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/163d51737fc75305690f05ba1bee571d31a67c5a.png" style="max-width: 100.0%;max-height: 100.0%;"> <span class="tex-font-size-small">Example of how you may move the first table.</span> </center><p>What is the minimum distance you should move the first table to free enough space for the second one?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains the single integer $$$t$$$ ($$$1 \le t \le 5000$$$) — the number of the test cases.</p><p>The first line of each test case contains two integers $$$W$$$ and $$$H$$$ ($$$1 \le W, H \le 10^8$$$) — the width and the height of the room.</p><p>The second line contains four integers $$$x_1$$$, $$$y_1$$$, $$$x_2$$$ and $$$y_2$$$ ($$$0 \le x_1  \lt  x_2 \le W$$$; $$$0 \le y_1  \lt  y_2 \le H$$$) — the coordinates of the corners of the first table.</p><p>The third line contains two integers $$$w$$$ and $$$h$$$ ($$$1 \le w \le W$$$; $$$1 \le h \le H$$$) — the width and the height of the second table.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the minimum distance you should move the first table, or $$$-1$$$ if there is no way to free enough space for the second table.</p><p>Your answer will be considered correct if its absolute or relative error doesn't exceed $$$10^{-6}$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009499684852318433" id="id009131901981196496" class="input-output-copier">Copy</div></div><pre id="id009499684852318433">5
8 5
2 1 7 4
4 2
5 4
2 2 5 4
3 3
1 8
0 3 1 6
1 5
8 1
3 0 6 1
5 1
8 10
4 5 7 8
8 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0009910263157658661" id="id008324062067560598" class="input-output-copier">Copy</div></div><pre id="id0009910263157658661">1.000000000
-1
2.000000000
2.000000000
0.000000000
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The configuration of the first test case is shown in the picture. But the movement of the first table is not optimal. One of the optimal movement, for example, is to move the table by $$$(0, -1)$$$, so the lower left corner will move from $$$(2, 1)$$$ to $$$(2, 0)$$$. Then you can place the second table at $$$(0, 3)-(4, 5)$$$.</p><p>In the second test case, there is no way to fit both tables in the room without intersecting.</p><p>In the third test case, you can move the first table by $$$(0, 2)$$$, so the lower left corner will move from $$$(0, 3)$$$ to $$$(0, 5)$$$.</p></div>