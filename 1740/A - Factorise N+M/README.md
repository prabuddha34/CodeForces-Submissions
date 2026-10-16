<h2><a href="https://codeforces.com/contest/1740/problem/A" target="_blank" rel="noopener noreferrer">1740A — Factorise N+M</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1740A](https://codeforces.com/contest/1740/problem/A) |

## Topics
`constructive algorithms` `number theory`

---

## Problem Statement

<div class="header"><div class="title">A. Factorise N+M</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Pak Chanek has a prime number$$$^\dagger$$$ $$$n$$$. Find a prime number $$$m$$$ such that $$$n + m$$$ is not prime.</p><p>$$$^\dagger$$$ A prime number is a number with <span class="tex-font-style-bf">exactly</span> $$$2$$$ factors. The first few prime numbers are $$$2,3,5,7,11,13,\ldots$$$. In particular, $$$1$$$ is <span class="tex-font-style-bf">not</span> a prime number.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases. The following lines contain the description of each test case.</p><p>The only line of each test case contains a prime number $$$n$$$ ($$$2 \leq n \leq 10^5$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a line containing a prime number $$$m$$$ ($$$2 \leq m \leq 10^5$$$) such that $$$n + m$$$ is not prime. It can be proven that under the constraints of the problem, such $$$m$$$ always exists.</p><p>If there are multiple solutions, you can output any of them. </p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005118756138122919" id="id008248562232924116" class="input-output-copier">Copy</div></div><pre id="id005118756138122919"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">7</div><div class="test-example-line test-example-line-even test-example-line-2">2</div><div class="test-example-line test-example-line-odd test-example-line-3">75619</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009280811128482152" id="id005933615035765211" class="input-output-copier">Copy</div></div><pre id="id009280811128482152">2
7
47837
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$m = 2$$$, which is prime, and $$$n + m = 7 + 2 = 9$$$, which is not prime.</p><p>In the second test case, $$$m = 7$$$, which is prime, and $$$n + m = 2 + 7 = 9$$$, which is not prime.</p><p>In the third test case, $$$m = 47837$$$, which is prime, and $$$n + m = 75619 + 47837 = 123456$$$, which is not prime.</p></div>