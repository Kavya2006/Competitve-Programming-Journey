<h2><a href="https://codeforces.com/contest/1470/problem/A" target="_blank" rel="noopener noreferrer">1470A — Strange Birthday Party</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1470A](https://codeforces.com/contest/1470/problem/A) |

## Topics
`binary search` `dp` `greedy` `sortings` `two pointers`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Strange Birthday Party</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Petya organized a strange birthday party. He invited $$$n$$$ friends and assigned an integer $$$k_i$$$ to the $$$i$$$-th of them. Now Petya would like to give a present to each of them. In the nearby shop there are $$$m$$$ unique presents available, the $$$j$$$-th present costs $$$c_j$$$ dollars ($$$1 \le c_1 \le c_2 \le \ldots \le c_m$$$). It's <span class="tex-font-style-bf">not</span> allowed to buy a single present more than once.</p><p>For the $$$i$$$-th friend Petya can either buy them a present $$$j \le k_i$$$, which costs $$$c_j$$$ dollars, or just give them $$$c_{k_i}$$$ dollars directly.</p><p>Help Petya determine the minimum total cost of hosting his party.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first input line contains a single integer $$$t$$$ ($$$1 \leq t \leq 10^3$$$) — the number of test cases.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$m$$$ ($$$1 \leq n, m \leq 3 \cdot 10^5$$$) — the number of friends, and the number of unique presents available.</p><p>The following line contains $$$n$$$ integers $$$k_1, k_2, \ldots, k_n$$$ ($$$1 \leq k_i \leq m$$$), assigned by Petya to his friends. </p><p>The next line contains $$$m$$$ integers $$$c_1, c_2, \ldots, c_m$$$ ($$$1 \le c_1 \le c_2 \le \ldots \le c_m \le 10^9$$$) — the prices of the presents.</p><p>It is guaranteed that sum of values $$$n$$$ over all test cases does not exceed $$$3 \cdot 10^5$$$, and the sum of values $$$m$$$ over all test cases does not exceed $$$3 \cdot 10^5$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case output a single integer — the minimum cost of the party.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Examples</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0015895424488845755" id="id0018989215346872523" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0015895424488845755">2
5 4
2 3 4 3 2
3 5 12 20
5 5
5 4 3 2 1
10 40 90 160 250
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id009344072074002616" id="id006604883600017855" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009344072074002616">30
190
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id006263021122311916" id="id00023956749293732704" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006263021122311916">1
1 1
1
1
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id005488660220929857" id="id007420974844774528" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id005488660220929857">1
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first example, there are two test cases. In the first one, Petya has $$$5$$$ friends and $$$4$$$ available presents. Petya can spend only $$$30$$$ dollars if he gives</p><ul> <li> $$$5$$$ dollars to the first friend. </li><li> A present that costs $$$12$$$ dollars to the second friend. </li><li> A present that costs $$$5$$$ dollars to the third friend. </li><li> A present that costs $$$3$$$ dollars to the fourth friend. </li><li> $$$5$$$ dollars to the fifth friend. </li></ul><p>In the second one, Petya has $$$5$$$ and $$$5$$$ available presents. Petya can spend only $$$190$$$ dollars if he gives</p><ul> <li> A present that costs $$$10$$$ dollars to the first friend. </li><li> A present that costs $$$40$$$ dollars to the second friend. </li><li> $$$90$$$ dollars to the third friend. </li><li> $$$40$$$ dollars to the fourth friend. </li><li> $$$10$$$ dollars to the fifth friend. </li></ul></div>