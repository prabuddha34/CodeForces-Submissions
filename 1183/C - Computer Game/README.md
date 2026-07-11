<h2><a href="https://codeforces.com/contest/1183/problem/C" target="_blank" rel="noopener noreferrer">1183C — Computer Game</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1183C](https://codeforces.com/contest/1183/problem/C) |

## Topics
`binary search` `math`

---

## Problem Statement

<div class="header"><div class="title">C. Computer Game</div><div class="time-limit"><div class="property-title">time limit per test</div>3 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Vova is playing a computer game. There are in total $$$n$$$ turns in the game and Vova really wants to play all of them. The initial charge of his laptop battery (i.e. the charge before the start of the game) is $$$k$$$.</p><p>During each turn Vova can choose what to do: </p><ul> <li> If the current charge of his laptop battery is strictly greater than $$$a$$$, Vova can <span class="tex-font-style-it">just play</span>, and then the charge of his laptop battery will decrease by $$$a$$$; </li><li> if the current charge of his laptop battery is strictly greater than $$$b$$$ ($$$b \lt a$$$), Vova can <span class="tex-font-style-it">play and charge</span> his laptop, and then the charge of his laptop battery will decrease by $$$b$$$; </li><li> if the current charge of his laptop battery is less than or equal to $$$a$$$ and $$$b$$$ at the same time then Vova cannot do anything and loses the game. </li></ul><p><span class="tex-font-style-bf">Regardless of Vova's turns the charge of the laptop battery is always decreases</span>.</p><p>Vova wants to complete the game (Vova can complete the game if after each of $$$n$$$ turns the charge of the laptop battery is <span class="tex-font-style-bf">strictly greater than $$$0$$$</span>). Vova has to play <span class="tex-font-style-bf">exactly $$$n$$$ turns</span>. Among all possible ways to complete the game, Vova wants to choose the one where the number of turns when he <span class="tex-font-style-it">just plays</span> (<span class="tex-font-style-bf">first type turn</span>) is the <span class="tex-font-style-bf">maximum</span> possible. It is possible that Vova cannot complete the game at all.</p><p>Your task is to find out the <span class="tex-font-style-bf">maximum</span> possible number of turns Vova can <span class="tex-font-style-it">just play</span> (make the <span class="tex-font-style-bf">first type turn</span>) or report that Vova cannot complete the game.</p><p>You have to answer $$$q$$$ independent queries.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$q$$$ ($$$1 \le q \le 10^5$$$) — the number of queries. Each query is presented by a single line.</p><p>The only line of the query contains four integers $$$k, n, a$$$ and $$$b$$$ ($$$1 \le k, n \le 10^9, 1 \le b  \lt  a \le 10^9$$$) — the initial charge of Vova's laptop battery, the number of turns in the game and values $$$a$$$ and $$$b$$$, correspondingly.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each query print one integer: <span class="tex-font-style-tt">-1</span> if Vova cannot complete the game or the <span class="tex-font-style-bf">maximum</span> number of turns Vova can <span class="tex-font-style-it">just play</span> (make the <span class="tex-font-style-bf">first type turn</span>) otherwise.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008211319722029868" id="id008859638213874884" class="input-output-copier">Copy</div></div><pre id="id008211319722029868">6
15 5 3 2
15 5 4 3
15 5 2 1
15 5 5 1
16 7 5 2
20 5 7 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003020101888812823" id="id006805342904540173" class="input-output-copier">Copy</div></div><pre id="id003020101888812823">4
-1
5
2
0
1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example query Vova can <span class="tex-font-style-it">just play</span> $$$4$$$ turns and spend $$$12$$$ units of charge and then one turn <span class="tex-font-style-it">play and charge</span> and spend $$$2$$$ more units. So the remaining charge of the battery will be $$$1$$$.</p><p>In the second example query Vova cannot complete the game because even if he will <span class="tex-font-style-it">play and charge</span> the battery during each turn then the charge of the laptop battery will be $$$0$$$ after the last turn.</p></div>