<h2><a href="https://codeforces.com/contest/9/problem/C" target="_blank" rel="noopener noreferrer">9C — Hexadecimal's Numbers</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 9C](https://codeforces.com/contest/9/problem/C) |

## Topics
`brute force` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">C. Hexadecimal's Numbers</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>64 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>One beautiful July morning a terrible thing happened in Mainframe: a mean virus Megabyte somehow got access to the memory of his not less mean sister Hexadecimal. He loaded there a huge amount of <span class="tex-span"><i>n</i></span> different natural numbers from 1 to <span class="tex-span"><i>n</i></span> to obtain total control over her energy.</p><p>But his plan failed. The reason for this was very simple: Hexadecimal didn't perceive any information, apart from numbers written in binary format. This means that if a number in a decimal representation contained characters apart from 0 and 1, it was not stored in the memory. Now Megabyte wants to know, how many numbers were loaded successfully.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Input data contains the only number <span class="tex-span"><i>n</i></span> (<span class="tex-span">1 ≤ <i>n</i> ≤ 10<sup class="upper-index">9</sup></span>).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output the only number — answer to the problem.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00552348869246914" id="id005315669820113053" class="input-output-copier">Copy</div></div><pre id="id00552348869246914">10<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005539994672239783" id="id002765471651552017" class="input-output-copier">Copy</div></div><pre id="id005539994672239783">2</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For <span class="tex-span"><i>n</i></span> = 10 the answer includes numbers 1 and 10.</p></div>