<h2><a href="https://codeforces.com/contest/630/problem/B" target="_blank" rel="noopener noreferrer">630B — Moore's Law</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 630B](https://codeforces.com/contest/630/problem/B) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">B. Moore's Law</div><div class="time-limit"><div class="property-title">time limit per test</div>0.5 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>64 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>The city administration of IT City decided to fix up a symbol of scientific and technical progress in the city's main square, namely an indicator board that shows the effect of Moore's law in real time.</p><p>Moore's law is the observation that the number of transistors in a dense integrated circuit doubles approximately every <span class="tex-span">24</span> months. The implication of Moore's law is that computer performance as function of time increases exponentially as well.</p><p>You are to prepare information that will change every second to display on the indicator board. Let's assume that every second the number of transistors increases exactly <span class="tex-span">1.000000011</span> times.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line of the input contains a pair of integers <span class="tex-span"><i>n</i></span> (<span class="tex-span">1000 ≤ <i>n</i> ≤ 10 000</span>) and <span class="tex-span"><i>t</i></span> (<span class="tex-span">0 ≤ <i>t</i> ≤ 2 000 000 000</span>) — the number of transistors in the initial time and the number of seconds passed since the initial time.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output one number — the estimate of the number of transistors in a dence integrated circuit in <span class="tex-span"><i>t</i></span> seconds since the initial time. The relative error of your answer should not be greater than <span class="tex-span">10<sup class="upper-index"> - 6</sup></span>.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0036403528328955237" id="id0010773950711473768" class="input-output-copier">Copy</div></div><pre id="id0036403528328955237">1000 1000000<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005276524687352124" id="id007237351621890296" class="input-output-copier">Copy</div></div><pre id="id005276524687352124">1011.060722383550382782399454922040<br></pre></div></div></div>