<h2><a href="https://codeforces.com/contest/38/problem/B" target="_blank" rel="noopener noreferrer">38B — Chess</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 38B](https://codeforces.com/contest/38/problem/B) |

## Topics
`brute force` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Chess</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>Two chess pieces, a rook and a knight, stand on a standard chessboard <span class="tex-span">8 × 8</span> in size. The positions in which they are situated are known. It is guaranteed that none of them beats the other one.</p><p>Your task is to find the number of ways to place another knight on the board so that none of the three pieces on the board beat another one. A new piece can only be placed on an empty square.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first input line contains the description of the rook's position on the board. This description is a line which is 2 in length. Its first symbol is a lower-case Latin letter from <span class="tex-font-style-tt">a</span> to <span class="tex-font-style-tt">h</span>, and its second symbol is a number from 1 to 8. The second line contains the description of the knight's position in a similar way. It is guaranteed that their positions do not coincide.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a single number which is the required number of ways.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007904750339351609" id="id002268945141119103" class="input-output-copier">Copy</div></div><pre id="id007904750339351609">a1<br>b2<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006383877976545455" id="id00665085166200692" class="input-output-copier">Copy</div></div><pre id="id006383877976545455">44<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007573538007814004" id="id008338840893297526" class="input-output-copier">Copy</div></div><pre id="id007573538007814004">a8<br>d4<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009508073776102463" id="id0017941401153926118" class="input-output-copier">Copy</div></div><pre id="id009508073776102463">38<br></pre></div></div></div>