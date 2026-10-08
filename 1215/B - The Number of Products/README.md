<h2><a href="https://codeforces.com/contest/1215/problem/B" target="_blank" rel="noopener noreferrer">1215B — The Number of Products</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1215B](https://codeforces.com/contest/1215/problem/B) |

## Topics
`combinatorics` `dp` `implementation`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. The Number of Products</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given a sequence $$$a_1, a_2, \dots, a_n$$$ consisting of $$$n$$$ non-zero integers (i.e. $$$a_i \ne 0$$$). </p><p>You have to calculate two following values:</p><ol> <li> the number of pairs of indices $$$(l, r)$$$ $$$(l \le r)$$$ such that $$$a_l \cdot a_{l + 1} \dots a_{r - 1} \cdot a_r$$$ is negative; </li><li> the number of pairs of indices $$$(l, r)$$$ $$$(l \le r)$$$ such that $$$a_l \cdot a_{l + 1} \dots a_{r - 1} \cdot a_r$$$ is positive; </li></ol></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains one integer $$$n$$$ $$$(1 \le n \le 2 \cdot 10^{5})$$$ — the number of elements in the sequence.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ $$$(-10^{9} \le a_i \le 10^{9}; a_i \neq 0)$$$ — the elements of the sequence.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>Print two integers — the number of subsegments with negative product and the number of subsegments with positive product, respectively.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Examples</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id003691166115662948" id="id0044496538475165426" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id003691166115662948">5
5 -3 3 -1 1
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id006242398548554065" id="id007425975585936487" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006242398548554065">8 7
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id006838991718845565" id="id0012050232205591704" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006838991718845565">10
4 2 -4 3 1 2 -4 3 2 3
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id009932005484785431" id="id00116156995164172" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009932005484785431">28 27
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id001971255537462323" id="id005818282756547443" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id001971255537462323">5
-1 -2 -3 -4 -5
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0039577739262659395" id="id0014100983178654047" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0039577739262659395">9 6
</pre></div></div></div>