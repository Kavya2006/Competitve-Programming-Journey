<h2><a href="https://codeforces.com/contest/1244/problem/E" target="_blank" rel="noopener noreferrer">1244E — Minimizing Difference</a></h2>

| | |
|---|---|
| **Difficulty** | 2000 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1244E](https://codeforces.com/contest/1244/problem/E) |

## Topics
`binary search` `constructive algorithms` `greedy` `sortings` `ternary search` `two pointers`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">E. Minimizing Difference</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given a sequence $$$a_1, a_2, \dots, a_n$$$ consisting of $$$n$$$ integers.</p><p>You may perform the following operation on this sequence: choose any element and either increase or decrease it by one.</p><p>Calculate the minimum possible difference between the maximum element and the minimum element in the sequence, if you can perform the aforementioned operation <span class="tex-font-style-bf">no more than</span> $$$k$$$ times.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains two integers $$$n$$$ and $$$k$$$ $$$(2 \le n \le 10^{5}, 1 \le k \le 10^{14})$$$ — the number of elements in the sequence and the maximum number of times you can perform the operation, respectively.</p><p>The second line contains a sequence of integers $$$a_1, a_2, \dots, a_n$$$ $$$(1 \le a_i \le 10^{9})$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>Print the minimum possible difference between the maximum element and the minimum element in the sequence, if you can perform the aforementioned operation <span class="tex-font-style-bf">no more than</span> $$$k$$$ times.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Examples</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id007778566036637099" id="id006995504295286773" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007778566036637099">4 5
3 1 7 5
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0005207646840710989" id="id009907748190809833" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0005207646840710989">2
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id008328550929563526" id="id0041752992372095454" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id008328550929563526">3 10
100 100 100
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id004488534421695881" id="id009229564302574293" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id004488534421695881">0
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0006552689447383253" id="id005714542495980964" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0006552689447383253">10 9
4 5 5 7 5 4 5 2 4 3
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0019493675296722357" id="id0032428062006589575" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0019493675296722357">1
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first example you can increase the first element twice and decrease the third element twice, so the sequence becomes $$$[3, 3, 5, 5]$$$, and the difference between maximum and minimum is $$$2$$$. You still can perform one operation after that, but it's useless since you can't make the answer less than $$$2$$$.</p><p>In the second example all elements are already equal, so you may get $$$0$$$ as the answer even without applying any operations.</p></div>