<h2><a href="https://codeforces.com/contest/1420/problem/C1" target="_blank" rel="noopener noreferrer">1420C1 — Pokémon Army (easy version)</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1420C1](https://codeforces.com/contest/1420/problem/C1) |

## Topics
`constructive algorithms` `dp` `greedy`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">C1. Pokémon Army (easy version)</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p><span class="tex-font-style-bf">This is the easy version of the problem. The difference between the versions is that the easy version has no swap operations. You can make hacks only if all versions of the problem are solved.</span></p><p>Pikachu is a cute and friendly pokémon living in the wild pikachu herd.</p><p>But it has become known recently that infamous team R wanted to steal all these pokémon! Pokémon trainer Andrew decided to help Pikachu to build a pokémon army to resist.</p><p>First, Andrew counted all the pokémon — there were exactly $$$n$$$ pikachu. The strength of the $$$i$$$-th pokémon is equal to $$$a_i$$$, and all these numbers are distinct.</p><p>As an army, Andrew can choose any non-empty subsequence of pokemons. In other words, Andrew chooses some array $$$b$$$ from $$$k$$$ indices such that $$$1 \le b_1  \lt  b_2  \lt  \dots  \lt  b_k \le n$$$, and his army will consist of pokémons with forces $$$a_{b_1}, a_{b_2}, \dots, a_{b_k}$$$.</p><p>The strength of the army is equal to the alternating sum of elements of the subsequence; that is, $$$a_{b_1} - a_{b_2} + a_{b_3} - a_{b_4} + \dots$$$.</p><p>Andrew is experimenting with pokémon order. He performs $$$q$$$ operations. In $$$i$$$-th operation Andrew swaps $$$l_i$$$-th and $$$r_i$$$-th pokémon.</p><p><span class="tex-font-style-bf">Note: $$$q=0$$$ in this version of the task.</span></p><p>Andrew wants to know the maximal stregth of the army he can achieve with the initial pokémon placement. He also needs to know the maximal strength after each operation.</p><p>Help Andrew and the pokémon, or team R will realize their tricky plan!</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>Each test contains multiple test cases.</p><p>The first line contains one positive integer $$$t$$$ ($$$1 \le t \le 10^3$$$) denoting the number of test cases. Description of the test cases follows.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$q$$$ ($$$1 \le n \le 3 \cdot 10^5, q = 0$$$) denoting the number of pokémon and number of operations respectively.</p><p>The second line contains $$$n$$$ distinct positive integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le n$$$) denoting the strengths of the pokémon.</p><p>$$$i$$$-th of the last $$$q$$$ lines contains two positive integers $$$l_i$$$ and $$$r_i$$$ ($$$1 \le l_i \le r_i \le n$$$) denoting the indices of pokémon that were swapped in the $$$i$$$-th operation.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$3 \cdot 10^5$$$, and the sum of $$$q$$$ over all test cases does not exceed $$$3 \cdot 10^5$$$. </p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print $$$q+1$$$ integers: the maximal strength of army before the swaps and after each swap.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id00704020496569964" id="id0014655272278550968" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00704020496569964">3
3 0
1 3 2
2 0
1 2
7 0
1 2 5 4 3 6 7
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0047284221297009976" id="id009210054904467833" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0047284221297009976">3
2
9
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In third test case we can build an army in such way: [1 2 <span class="tex-font-style-bf">5</span> 4 <span class="tex-font-style-bf">3</span> 6 <span class="tex-font-style-bf">7</span>], its strength will be $$$5−3+7=9$$$.</p></div>