<h2><a href="https://codeforces.com/contest/55/problem/A" target="_blank" rel="noopener noreferrer">55A — Flea travel</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 55A](https://codeforces.com/contest/55/problem/A) |

## Topics
`implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Flea travel</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>A flea is sitting at one of the <span class="tex-span"><i>n</i></span> hassocks, arranged in a circle, at the moment. After minute number <span class="tex-span"><i>k</i></span> the flea jumps through <span class="tex-span"><i>k</i> - 1</span> hassoсks (clockwise). For example, after the first minute the flea jumps to the neighboring hassock. You should answer: will the flea visit all the hassocks or not. We assume that flea has infinitely much time for this jumping.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains single integer: <span class="tex-span">1 ≤ <i>n</i> ≤ 1000</span> — number of hassocks.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output "<span class="tex-font-style-tt">YES</span>" if all the hassocks will be visited and "<span class="tex-font-style-tt">NO</span>" otherwise.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00017667768470834178" id="id007109732154058633" class="input-output-copier">Copy</div></div><pre id="id00017667768470834178">1<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00837452683177969" id="id0041685827153960664" class="input-output-copier">Copy</div></div><pre id="id00837452683177969">YES<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0004229515348555146" id="id002956123862248512" class="input-output-copier">Copy</div></div><pre id="id0004229515348555146">3<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008776202068078159" id="id005486005586328383" class="input-output-copier">Copy</div></div><pre id="id008776202068078159">NO<br></pre></div></div></div>