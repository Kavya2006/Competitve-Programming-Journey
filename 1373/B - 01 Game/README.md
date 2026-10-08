<h2><a href="https://codeforces.com/contest/1373/problem/B" target="_blank" rel="noopener noreferrer">1373B — 01 Game</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1373B](https://codeforces.com/contest/1373/problem/B) |

## Topics
`games`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. 01 Game</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Alica and Bob are playing a game.</p><p>Initially they have a binary string $$$s$$$ consisting of only characters <span class="tex-font-style-tt">0</span> and <span class="tex-font-style-tt">1</span>.</p><p>Alice and Bob make alternating moves: Alice makes the first move, Bob makes the second move, Alice makes the third one, and so on. During each move, the current player must choose two <span class="tex-font-style-bf">different adjacent</span> characters of string $$$s$$$ and delete them. For example, if $$$s = 1011001$$$ then the following moves are possible: </p><ol> <li> delete $$$s_1$$$ and $$$s_2$$$: $$$\textbf{10}11001 \rightarrow 11001$$$; </li><li> delete $$$s_2$$$ and $$$s_3$$$: $$$1\textbf{01}1001 \rightarrow 11001$$$; </li><li> delete $$$s_4$$$ and $$$s_5$$$: $$$101\textbf{10}01 \rightarrow 10101$$$; </li><li> delete $$$s_6$$$ and $$$s_7$$$: $$$10110\textbf{01} \rightarrow 10110$$$. </li></ol><p>If a player can't make any move, they lose. Both players play optimally. You have to determine if Alice can win.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>First line contains one integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases.</p><p>Only line of each test case contains one string $$$s$$$ ($$$1 \le |s| \le 100$$$), consisting of only characters <span class="tex-font-style-tt">0</span> and <span class="tex-font-style-tt">1</span>.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case print answer in the single line.</p><p>If Alice can win print <span class="tex-font-style-tt">DA</span> (YES in Russian) in any register. Otherwise print <span class="tex-font-style-tt">NET</span> (NO in Russian) in any register.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0031607039721862784" id="id0018299452411299688" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0031607039721862784">3
01
1111
0011
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0040642215452835284" id="id009546757460972685" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0040642215452835284">DA
NET
NET
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case after Alice's move string $$$s$$$ become empty and Bob can not make any move.</p><p>In the second test case Alice can not make any move initially.</p><p>In the third test case after Alice's move string $$$s$$$ turn into $$$01$$$. Then, after Bob's move string $$$s$$$ become empty and Alice can not make any move.</p></div>