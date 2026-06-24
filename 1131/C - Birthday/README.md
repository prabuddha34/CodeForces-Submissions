<h2><a href="https://codeforces.com/contest/1131/problem/C" target="_blank" rel="noopener noreferrer">1131C — Birthday</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1131C](https://codeforces.com/contest/1131/problem/C) |

## Topics
`binary search` `greedy` `sortings`

---

## Problem Statement

<div class="header"><div class="title">C. Birthday</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Cowboy Vlad has a birthday today! There are $$$n$$$ children who came to the celebration. In order to greet Vlad, the children decided to form a circle around him. Among the children who came, there are both tall and low, so if they stand in a circle arbitrarily, it may turn out, that there is a tall and low child standing next to each other, and it will be difficult for them to hold hands. Therefore, children want to stand in a circle so that the maximum difference between the growth of two neighboring children would be minimal possible.</p><p>Formally, let's number children from $$$1$$$ to $$$n$$$ in a circle order, that is, for every $$$i$$$ child with number $$$i$$$ will stand next to the child with number $$$i+1$$$, also the child with number $$$1$$$ stands next to the child with number $$$n$$$. Then we will call the discomfort of the circle the maximum absolute difference of heights of the children, who stand next to each other.</p><p>Please help children to find out how they should reorder themselves, so that the resulting discomfort is smallest possible.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$n$$$ ($$$2 \leq n \leq 100$$$) — the number of the children who came to the cowboy Vlad's birthday.</p><p>The second line contains integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \leq a_i \leq 10^9$$$) denoting heights of every child.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print exactly $$$n$$$ integers — heights of the children in the order in which they should stand in a circle. You can start printing a circle with any child.</p><p>If there are multiple possible answers, print any of them.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0048058817947859556" id="id003822322719556327" class="input-output-copier">Copy</div></div><pre id="id0048058817947859556">5
2 1 1 3 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009048513173220128" id="id0043448426274672947" class="input-output-copier">Copy</div></div><pre id="id009048513173220128">1 2 3 2 1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009454905360664656" id="id008566666429202097" class="input-output-copier">Copy</div></div><pre id="id009454905360664656">3
30 10 20
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007732982468810243" id="id008991481012093828" class="input-output-copier">Copy</div></div><pre id="id007732982468810243">10 20 30
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, the discomfort of the circle is equal to $$$1$$$, since the corresponding absolute differences are $$$1$$$, $$$1$$$, $$$1$$$ and $$$0$$$. Note, that sequences $$$[2, 3, 2, 1, 1]$$$ and $$$[3, 2, 1, 1, 2]$$$ form the same circles and differ only by the selection of the starting point.</p><p>In the second example, the discomfort of the circle is equal to $$$20$$$, since the absolute difference of $$$10$$$ and $$$30$$$ is equal to $$$20$$$.</p></div>