<h2><a href="https://codeforces.com/contest/1288/problem/C" target="_blank" rel="noopener noreferrer">1288C — Two Arrays</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1288C](https://codeforces.com/contest/1288/problem/C) |

## Topics
`combinatorics` `dp`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">C. Two Arrays</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given two integers $$$n$$$ and $$$m$$$. Calculate the number of pairs of arrays $$$(a, b)$$$ such that:</p><ul> <li> the length of both arrays is equal to $$$m$$$; </li><li> each element of each array is an integer between $$$1$$$ and $$$n$$$ (inclusive); </li><li> $$$a_i \le b_i$$$ for any index $$$i$$$ from $$$1$$$ to $$$m$$$; </li><li> array $$$a$$$ is sorted in non-descending order; </li><li> array $$$b$$$ is sorted in non-ascending order. </li></ul><p>As the result can be very large, you should print it modulo $$$10^9+7$$$.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The only line contains two integers $$$n$$$ and $$$m$$$ ($$$1 \le n \le 1000$$$, $$$1 \le m \le 10$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>Print one integer – the number of arrays $$$a$$$ and $$$b$$$ satisfying the conditions described above modulo $$$10^9+7$$$.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Examples</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id007992014285238104" id="id005042012749777259" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007992014285238104">2 2
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id002009932334329807" id="id004362926387715279" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id002009932334329807">5
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id006658395733177371" id="id002474547114947172" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006658395733177371">10 1
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id009415798922702995" id="id0024711072093784892" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009415798922702995">55
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0019492875192040282" id="id009769542510737768" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0019492875192040282">723 9
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id009086236371990257" id="id007096359801682506" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009086236371990257">157557417
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test there are $$$5$$$ suitable arrays: </p><ul> <li> $$$a = [1, 1], b = [2, 2]$$$; </li><li> $$$a = [1, 2], b = [2, 2]$$$; </li><li> $$$a = [2, 2], b = [2, 2]$$$; </li><li> $$$a = [1, 1], b = [2, 1]$$$; </li><li> $$$a = [1, 1], b = [1, 1]$$$. </li></ul></div>