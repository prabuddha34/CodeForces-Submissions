<h2><a href="https://codeforces.com/contest/1694/problem/A" target="_blank" rel="noopener noreferrer">1694A — Creep</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1694A](https://codeforces.com/contest/1694/problem/A) |

## Topics
`greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Creep</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Define the score of some binary string $$$T$$$ as the absolute difference between the number of zeroes and ones in it. (for example, $$$T=$$$ <span class="tex-font-style-tt">010001</span> contains $$$4$$$ zeroes and $$$2$$$ ones, so the score of $$$T$$$ is $$$|4-2| = 2$$$).</p><p>Define the creepiness of some binary string $$$S$$$ as the maximum score among all of its prefixes (for example, the creepiness of $$$S=$$$ <span class="tex-font-style-tt">01001</span> is equal to $$$2$$$ because the score of the prefix $$$S[1 \ldots 4]$$$ is $$$2$$$ and the rest of the prefixes have a score of $$$2$$$ or less).</p><p>Given two integers $$$a$$$ and $$$b$$$, construct a binary string consisting of $$$a$$$ zeroes and $$$b$$$ ones with the minimum possible creepiness.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ $$$(1\le t\le 1000)$$$  — the number of test cases. The description of the test cases follows.</p><p>The only line of each test case contains two integers $$$a$$$ and $$$b$$$ ($$$ 1 \le a, b \le 100$$$)  — the numbers of zeroes and ones correspondingly.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print a binary string consisting of $$$a$$$ zeroes and $$$b$$$ ones with the minimum possible creepiness. If there are multiple answers, print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0016576151705190068" id="id0004760097061047375" class="input-output-copier">Copy</div></div><pre id="id0016576151705190068">5
1 1
1 2
5 2
4 5
3 7
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005255206404849537" id="id006107965959333097" class="input-output-copier">Copy</div></div><pre id="id005255206404849537">10
011
0011000
101010101
0001111111
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the score of $$$S[1 \ldots 1]$$$ is $$$1$$$, and the score of $$$S[1 \ldots 2]$$$ is $$$0$$$.</p><p>In the second test case, the minimum possible creepiness is $$$1$$$ and one of the other answers is <span class="tex-font-style-tt">101</span>.</p><p>In the third test case, the minimum possible creepiness is $$$3$$$ and one of the other answers is <span class="tex-font-style-tt">0001100</span>.</p></div>