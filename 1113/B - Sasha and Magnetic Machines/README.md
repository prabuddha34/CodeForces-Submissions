<h2><a href="https://codeforces.com/contest/1113/problem/B" target="_blank" rel="noopener noreferrer">1113B — Sasha and Magnetic Machines</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1113B](https://codeforces.com/contest/1113/problem/B) |

## Topics
`greedy` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. Sasha and Magnetic Machines</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>One day Sasha visited the farmer 2D and his famous magnetic farm. On this farm, the crop grows due to the influence of a special magnetic field. Maintaining of the magnetic field is provided by $$$n$$$ machines, and the power of the $$$i$$$-th machine is $$$a_i$$$. </p><p>This year 2D decided to cultivate a new culture, but what exactly he didn't say. For the successful growth of the new culture, it is necessary to slightly change the powers of the machines. 2D can <span class="tex-font-style-bf">at most once</span> choose an arbitrary integer $$$x$$$, then choose one machine and reduce the power of its machine by $$$x$$$ times, and at the same time increase the power of one another machine by $$$x$$$ times (powers of all the machines must stay <span class="tex-font-style-bf">positive integers</span>). Note that he may not do that if he wants. More formally, 2D can choose two such indices $$$i$$$ and $$$j$$$, and one integer $$$x$$$ such that $$$x$$$ is a divisor of $$$a_i$$$, and change powers as following: $$$a_i = \frac{a_i}{x}$$$, $$$a_j = a_j \cdot x$$$</p><p>Sasha is very curious, that's why he wants to calculate the <span class="tex-font-style-bf">minimum</span> total power the farmer can reach. There are too many machines, and Sasha can't cope with computations, help him!</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$n$$$ ($$$2 \le n \le 5 \cdot 10^4$$$) — the number of machines.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le 100$$$) — the powers of the machines.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer — minimum total power.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0094956893891307" id="id0009660391808213287" class="input-output-copier">Copy</div></div><pre id="id0094956893891307">5
1 2 3 4 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0036209240882830407" id="id00380131676048432" class="input-output-copier">Copy</div></div><pre id="id0036209240882830407">14
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009662067912374355" id="id0023826496712306466" class="input-output-copier">Copy</div></div><pre id="id009662067912374355">4
4 2 4 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002698172333421237" id="id005547340391054438" class="input-output-copier">Copy</div></div><pre id="id002698172333421237">14
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007112873116849588" id="id005267812165964666" class="input-output-copier">Copy</div></div><pre id="id007112873116849588">5
2 4 2 3 7
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005843211472133352" id="id000726269389773031" class="input-output-copier">Copy</div></div><pre id="id005843211472133352">18
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, the farmer can reduce the power of the $$$4$$$-th machine by $$$2$$$ times, and increase the power of the $$$1$$$-st machine by $$$2$$$ times, then the powers will be: $$$[2, 2, 3, 2, 5]$$$.</p><p>In the second example, the farmer can reduce the power of the $$$3$$$-rd machine by $$$2$$$ times, and increase the power of the $$$2$$$-nd machine by $$$2$$$ times. At the same time, the farmer can leave is be as it is and the total power won't change.</p><p>In the third example, it is optimal to leave it be as it is.</p></div>