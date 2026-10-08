<h2><a href="https://codeforces.com/contest/1234/problem/D" target="_blank" rel="noopener noreferrer">1234D — Distinct Characters Queries</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1234D](https://codeforces.com/contest/1234/problem/D) |

## Topics
`data structures`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">D. Distinct Characters Queries</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given a string $$$s$$$ consisting of lowercase Latin letters and $$$q$$$ queries for this string.</p><p>Recall that the substring $$$s[l; r]$$$ of the string $$$s$$$ is the string $$$s_l s_{l + 1} \dots s_r$$$. For example, the substrings of "<span class="tex-font-style-tt">codeforces</span>" are "<span class="tex-font-style-tt">code</span>", "<span class="tex-font-style-tt">force</span>", "<span class="tex-font-style-tt">f</span>", "<span class="tex-font-style-tt">for</span>", but not "<span class="tex-font-style-tt">coder</span>" and "<span class="tex-font-style-tt">top</span>".</p><p>There are two types of queries: </p><ul> <li> $$$1~ pos~ c$$$ ($$$1 \le pos \le |s|$$$, $$$c$$$ is lowercase Latin letter): replace $$$s_{pos}$$$ with $$$c$$$ (set $$$s_{pos} := c$$$); </li><li> $$$2~ l~ r$$$ ($$$1 \le l \le r \le |s|$$$): calculate the number of distinct characters in the substring $$$s[l; r]$$$. </li></ul></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line of the input contains one string $$$s$$$ consisting of no more than $$$10^5$$$ lowercase Latin letters.</p><p>The second line of the input contains one integer $$$q$$$ ($$$1 \le q \le 10^5$$$) — the number of queries.</p><p>The next $$$q$$$ lines contain queries, one per line. Each query is given in the format described in the problem statement. It is guaranteed that there is at least one query of the second type.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each query of the second type print the answer for it — the number of distinct characters in the required substring in this query.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Examples</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0035838935458017307" id="id006303862606482652" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0035838935458017307">abacaba
5
2 1 4
1 4 b
1 5 b
2 4 6
2 1 7
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id007032104466935365" id="id008138301965906809" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007032104466935365">3
1
2
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id009557922529068748" id="id006412715695581016" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009557922529068748">dfcbbcfeeedbaea
15
1 6 e
1 4 b
2 6 14
1 7 b
1 12 c
2 6 8
2 1 6
1 7 c
1 2 f
1 10 a
2 7 9
1 10 a
1 14 b
1 1 f
2 1 11
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0036515455998718593" id="id006044672776862936" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0036515455998718593">5
2
5
2
6
</pre></div></div></div>