<h2><a href="https://codeforces.com/contest/552/problem/B" target="_blank" rel="noopener noreferrer">552B — Vanya and Books</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 552B](https://codeforces.com/contest/552/problem/B) |

## Topics
`implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Vanya and Books</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Vanya got an important task — he should enumerate books in the library and label each book with its number. Each of the <span class="tex-span"><i>n</i></span> books should be assigned with a number from <span class="tex-span">1</span> to <span class="tex-span"><i>n</i></span>. Naturally, distinct books should be assigned distinct numbers.</p><p>Vanya wants to know how many digits he will have to write down as he labels the books.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains integer <span class="tex-span"><i>n</i></span> (<span class="tex-span">1 ≤ <i>n</i> ≤ 10<sup class="upper-index">9</sup></span>) — the number of books in the library.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the number of digits needed to number all the books.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004009467817800796" id="id0046958622525944915" class="input-output-copier">Copy</div></div><pre id="id004009467817800796">13<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0027333208761259686" id="id0022529573186796947" class="input-output-copier">Copy</div></div><pre id="id0027333208761259686">17<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006193669861514169" id="id006502658404901456" class="input-output-copier">Copy</div></div><pre id="id006193669861514169">4<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003182212353893191" id="id006526092271632223" class="input-output-copier">Copy</div></div><pre id="id003182212353893191">4<br></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Note to the first test. The books get numbers <span class="tex-span">1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13</span>, which totals to <span class="tex-span">17</span> digits.</p><p>Note to the second sample. The books get numbers <span class="tex-span">1, 2, 3, 4</span>, which totals to 4 digits.</p></div>