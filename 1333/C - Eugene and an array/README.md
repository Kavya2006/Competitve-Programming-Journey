<h2><a href="https://codeforces.com/contest/1333/problem/C" target="_blank" rel="noopener noreferrer">1333C — Eugene and an array</a></h2>

| | |
|---|---|
| **Difficulty** | 1700 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1333C](https://codeforces.com/contest/1333/problem/C) |

## Topics
`binary search` `data structures` `implementation` `two pointers`

---

## Problem Statement

<div class="header"><div class="title">C. Eugene and an array</div><div class="time-limit"><div class="property-title">time limit per test</div>1.5 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Eugene likes working with arrays. And today he needs your help in solving one challenging task.</p><p>An array $$$c$$$ is a subarray of an array $$$b$$$ if $$$c$$$ can be obtained from $$$b$$$ by deletion of several (possibly, zero or all) elements from the beginning and several (possibly, zero or all) elements from the end.</p><p>Let's call a nonempty array <span class="tex-font-style-bf">good</span> if for every nonempty subarray of this array, sum of the elements of this subarray is nonzero. For example, array $$$[-1, 2, -3]$$$ is <span class="tex-font-style-bf">good</span>, as all arrays $$$[-1]$$$, $$$[-1, 2]$$$, $$$[-1, 2, -3]$$$, $$$[2]$$$, $$$[2, -3]$$$, $$$[-3]$$$ have nonzero sums of elements. However, array $$$[-1, 2, -1, -3]$$$ isn't <span class="tex-font-style-bf">good</span>, as his subarray $$$[-1, 2, -1]$$$ has sum of elements equal to $$$0$$$.</p><p>Help Eugene to calculate the number of nonempty <span class="tex-font-style-bf">good</span> subarrays of a given array $$$a$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains a single integer $$$n$$$ ($$$1 \le n \le 2 \times 10^5$$$)  — the length of array $$$a$$$.</p><p>The second line of the input contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$-10^9 \le a_i \le 10^9$$$)  — the elements of $$$a$$$. </p></div><div class="output-specification"><div class="section-title">Output</div><p>Output a single integer  — the number of <span class="tex-font-style-bf">good</span> subarrays of $$$a$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002795448441865632" id="id007955571557501685" class="input-output-copier">Copy</div></div><pre id="id002795448441865632">3
1 2 -3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008533649939945677" id="id003414869879276635" class="input-output-copier">Copy</div></div><pre id="id008533649939945677">5
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009877386688778614" id="id008463102221600527" class="input-output-copier">Copy</div></div><pre id="id009877386688778614">3
41 -41 41
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id001071129141501368" id="id006790043972508358" class="input-output-copier">Copy</div></div><pre id="id001071129141501368">3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first sample, the following subarrays are <span class="tex-font-style-bf">good</span>: $$$[1]$$$, $$$[1, 2]$$$, $$$[2]$$$, $$$[2, -3]$$$, $$$[-3]$$$. However, the subarray $$$[1, 2, -3]$$$ isn't <span class="tex-font-style-bf">good</span>, as its subarray $$$[1, 2, -3]$$$ has sum of elements equal to $$$0$$$.</p><p>In the second sample, three subarrays of size 1 are the only <span class="tex-font-style-bf">good</span> subarrays. At the same time, the subarray $$$[41, -41, 41]$$$ isn't <span class="tex-font-style-bf">good</span>, as its subarray $$$[41, -41]$$$ has sum of elements equal to $$$0$$$.</p></div>