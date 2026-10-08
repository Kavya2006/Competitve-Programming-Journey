<h2><a href="https://codeforces.com/contest/1324/problem/D" target="_blank" rel="noopener noreferrer">1324D — Pair of Topics</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1324D](https://codeforces.com/contest/1324/problem/D) |

## Topics
`binary search` `data structures` `sortings` `two pointers`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">D. Pair of Topics</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>The next lecture in a high school requires two topics to be discussed. The $$$i$$$-th topic is interesting by $$$a_i$$$ units for the teacher and by $$$b_i$$$ units for the students.</p><p>The pair of topics $$$i$$$ and $$$j$$$ ($$$i  \lt  j$$$) is called <span class="tex-font-style-bf">good</span> if $$$a_i + a_j  \gt  b_i + b_j$$$ (i.e. it is more interesting for the teacher).</p><p>Your task is to find the number of <span class="tex-font-style-bf">good</span> pairs of topics.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line of the input contains one integer $$$n$$$ ($$$2 \le n \le 2 \cdot 10^5$$$) — the number of topics.</p><p>The second line of the input contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^9$$$), where $$$a_i$$$ is the interestingness of the $$$i$$$-th topic for the teacher.</p><p>The third line of the input contains $$$n$$$ integers $$$b_1, b_2, \dots, b_n$$$ ($$$1 \le b_i \le 10^9$$$), where $$$b_i$$$ is the interestingness of the $$$i$$$-th topic for the students.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>Print one integer — the number of <span class="tex-font-style-bf">good</span> pairs of topic.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Examples</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0026567476419137404" id="id00834078481742027" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0026567476419137404">5
4 8 2 6 2
4 5 4 1 3
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id00020592164354672704" id="id007966300514500538" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00020592164354672704">7
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id003684078302730862" id="id0010646582256345583" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id003684078302730862">4
1 3 2 4
1 3 2 4
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id006103462703811032" id="id006795640200481873" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006103462703811032">0
</pre></div></div></div>