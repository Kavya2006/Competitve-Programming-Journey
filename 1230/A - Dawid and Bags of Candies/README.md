<h2><a href="https://codeforces.com/contest/1230/problem/A" target="_blank" rel="noopener noreferrer">1230A — Dawid and Bags of Candies</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1230A](https://codeforces.com/contest/1230/problem/A) |

## Topics
`brute force` `implementation`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Dawid and Bags of Candies</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Dawid has four bags of candies. The $$$i$$$-th of them contains $$$a_i$$$ candies. Also, Dawid has two friends. He wants to give each bag to one of his two friends. Is it possible to distribute the bags in such a way that each friend receives the same amount of candies in total?</p><p>Note, that you can't keep bags for yourself or throw them away, each bag should be given to one of the friends.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The only line contains four integers $$$a_1$$$, $$$a_2$$$, $$$a_3$$$ and $$$a_4$$$ ($$$1 \leq a_i \leq 100$$$) — the numbers of candies in each bag.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>Output <span class="tex-font-style-tt">YES</span> if it's possible to give the bags to Dawid's friends so that both friends receive the same amount of candies, or <span class="tex-font-style-tt">NO</span> otherwise. Each character can be printed in any case (either uppercase or lowercase).</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Examples</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0015116005119118425" id="id005131588633060564" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0015116005119118425">1 7 11 5
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id007901369106842608" id="id002820004850858939" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007901369106842608">YES
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id003087570376514944" id="id005016684758040707" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id003087570376514944">7 3 2 5
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0041727977744001277" id="id001015590108276625" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0041727977744001277">NO
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first sample test, Dawid can give the first and the third bag to the first friend, and the second and the fourth bag to the second friend. This way, each friend will receive $$$12$$$ candies.</p><p>In the second sample test, it's impossible to distribute the bags.</p></div>