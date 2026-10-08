<h2><a href="https://codeforces.com/contest/1201/problem/B" target="_blank" rel="noopener noreferrer">1201B — Zero Array</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1201B](https://codeforces.com/contest/1201/problem/B) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Zero Array</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given an array $$$a_1, a_2, \ldots, a_n$$$.</p><p>In one operation you can choose two elements $$$a_i$$$ and $$$a_j$$$ ($$$i \ne j$$$) and decrease each of them by one.</p><p>You need to check whether it is possible to make all the elements equal to zero or not.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$n$$$ ($$$2 \le n \le 10^5$$$) — the size of the array.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le 10^9$$$) — the elements of the array.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>Print "<span class="tex-font-style-tt">YES</span>" if it is possible to make all elements zero, otherwise print "<span class="tex-font-style-tt">NO</span>".</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Examples</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id005655288255956108" id="id006707763991947746" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id005655288255956108">4
1 1 2 2
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id009780431798185568" id="id0008404671468400082" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009780431798185568">YES</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id001384005088688871" id="id0012240458579910185" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id001384005088688871">6
1 2 3 4 5 6
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id006604552434825699" id="id006413474997248924" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006604552434825699">NO</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first example, you can make all elements equal to zero in $$$3$$$ operations: </p><ul> <li> Decrease $$$a_1$$$ and $$$a_2$$$, </li><li> Decrease $$$a_3$$$ and $$$a_4$$$, </li><li> Decrease $$$a_3$$$ and $$$a_4$$$ </li></ul><p>In the second example, one can show that it is impossible to make all elements equal to zero.</p></div>