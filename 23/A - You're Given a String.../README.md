<h2><a href="https://codeforces.com/contest/23/problem/A" target="_blank" rel="noopener noreferrer">23A — You're Given a String...</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 23A](https://codeforces.com/contest/23/problem/A) |

## Topics
`brute force` `greedy`

---

## Problem Statement

<div class="header"><div class="title">A. You're Given a String...</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>You're given a string of lower-case Latin letters. Your task is to find the length of its longest substring that can be met in the string at least twice. These occurrences can overlap (see sample test 2).</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first input line contains the string. It's guaranteed, that the string is non-empty, consists of lower-case Latin letters, and its length doesn't exceed 100.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output one number — length of the longest substring that can be met in the string at least twice.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0010153566598250785" id="id0019254401572210844" class="input-output-copier">Copy</div></div><pre id="id0010153566598250785">abcd<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005680091872135425" id="id009854445029781317" class="input-output-copier">Copy</div></div><pre id="id005680091872135425">0</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009888691223648316" id="id001690449516354937" class="input-output-copier">Copy</div></div><pre id="id009888691223648316">ababa<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009986937867698449" id="id0014464286744569244" class="input-output-copier">Copy</div></div><pre id="id009986937867698449">3</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005073609554852961" id="id0009037653087571196" class="input-output-copier">Copy</div></div><pre id="id005073609554852961">zzz<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00049198087727658324" id="id003331068309172893" class="input-output-copier">Copy</div></div><pre id="id00049198087727658324">2</pre></div></div></div>