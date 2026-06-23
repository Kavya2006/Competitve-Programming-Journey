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

<div class="header"><div class="title">E. Minimizing Difference</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a sequence $$$a_1, a_2, \dots, a_n$$$ consisting of $$$n$$$ integers.</p><p>You may perform the following operation on this sequence: choose any element and either increase or decrease it by one.</p><p>Calculate the minimum possible difference between the maximum element and the minimum element in the sequence, if you can perform the aforementioned operation <span class="tex-font-style-bf">no more than</span> $$$k$$$ times.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n$$$ and $$$k$$$ $$$(2 \le n \le 10^{5}, 1 \le k \le 10^{14})$$$ — the number of elements in the sequence and the maximum number of times you can perform the operation, respectively.</p><p>The second line contains a sequence of integers $$$a_1, a_2, \dots, a_n$$$ $$$(1 \le a_i \le 10^{9})$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the minimum possible difference between the maximum element and the minimum element in the sequence, if you can perform the aforementioned operation <span class="tex-font-style-bf">no more than</span> $$$k$$$ times.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0021523835909686484" id="id0010400932047220057" class="input-output-copier">Copy</div></div><pre id="id0021523835909686484">4 5
3 1 7 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009354168791598093" id="id007672704539666115" class="input-output-copier">Copy</div></div><pre id="id009354168791598093">2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00378281405143128" id="id008850639434094102" class="input-output-copier">Copy</div></div><pre id="id00378281405143128">3 10
100 100 100
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004108292035259439" id="id005852795610029562" class="input-output-copier">Copy</div></div><pre id="id004108292035259439">0
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id000894465344988793" id="id005866514504265503" class="input-output-copier">Copy</div></div><pre id="id000894465344988793">10 9
4 5 5 7 5 4 5 2 4 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008329469924991615" id="id0021221433939700762" class="input-output-copier">Copy</div></div><pre id="id008329469924991615">1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example you can increase the first element twice and decrease the third element twice, so the sequence becomes $$$[3, 3, 5, 5]$$$, and the difference between maximum and minimum is $$$2$$$. You still can perform one operation after that, but it's useless since you can't make the answer less than $$$2$$$.</p><p>In the second example all elements are already equal, so you may get $$$0$$$ as the answer even without applying any operations.</p></div>