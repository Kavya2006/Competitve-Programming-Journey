<h2><a href="https://codeforces.com/contest/1110/problem/E" target="_blank" rel="noopener noreferrer">1110E — Magic Stones</a></h2>

| | |
|---|---|
| **Difficulty** | 2200 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1110E](https://codeforces.com/contest/1110/problem/E) |

## Topics
`constructive algorithms` `math` `sortings`

---

## Problem Statement

<div class="header"><div class="title">E. Magic Stones</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Grigory has $$$n$$$ magic stones, conveniently numbered from $$$1$$$ to $$$n$$$. The <span class="tex-font-style-it">charge</span> of the $$$i$$$-th stone is equal to $$$c_i$$$.</p><p>Sometimes Grigory gets bored and selects some <span class="tex-font-style-it">inner</span> stone (that is, some stone with index $$$i$$$, where $$$2 \le i \le n - 1$$$), and after that <span class="tex-font-style-it">synchronizes</span> it with neighboring stones. After that, the chosen stone loses its own charge, but acquires the charges from neighboring stones. In other words, its charge $$$c_i$$$ changes to $$$c_i' = c_{i + 1} + c_{i - 1} - c_i$$$.</p><p>Andrew, Grigory's friend, also has $$$n$$$ stones with charges $$$t_i$$$. Grigory is curious, whether there exists a sequence of zero or more <span class="tex-font-style-it">synchronization</span> operations, which transforms charges of Grigory's stones into charges of corresponding Andrew's stones, that is, changes $$$c_i$$$ into $$$t_i$$$ for all $$$i$$$?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$n$$$ ($$$2 \le n \le 10^5$$$) — the number of magic stones.</p><p>The second line contains integers $$$c_1, c_2, \ldots, c_n$$$ ($$$0 \le c_i \le 2 \cdot 10^9$$$) — the charges of Grigory's stones.</p><p>The second line contains integers $$$t_1, t_2, \ldots, t_n$$$ ($$$0 \le t_i \le 2 \cdot 10^9$$$) — the charges of Andrew's stones.</p></div><div class="output-specification"><div class="section-title">Output</div><p>If there exists a (possibly empty) sequence of <span class="tex-font-style-it">synchronization</span> operations, which changes all charges to the required ones, print "<span class="tex-font-style-tt">Yes</span>".</p><p>Otherwise, print "<span class="tex-font-style-tt">No</span>".</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008674694743568767" id="id0021756942826242076" class="input-output-copier">Copy</div></div><pre id="id008674694743568767">4
7 2 4 12
7 15 10 12
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009802556382252795" id="id0011620750040391381" class="input-output-copier">Copy</div></div><pre id="id009802556382252795">Yes
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00800220208421148" id="id008593668046028597" class="input-output-copier">Copy</div></div><pre id="id00800220208421148">3
4 4 4
1 2 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00635714134253468" id="id005340182869187242" class="input-output-copier">Copy</div></div><pre id="id00635714134253468">No
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, we can perform the following <span class="tex-font-style-it">synchronizations</span> ($$$1$$$-indexed):</p><ul> <li> First, <span class="tex-font-style-it">synchronize</span> the third stone $$$[7, 2, \mathbf{4}, 12] \rightarrow [7, 2, \mathbf{10}, 12]$$$. </li><li> Then <span class="tex-font-style-it">synchronize</span> the second stone: $$$[7, \mathbf{2}, 10, 12] \rightarrow [7, \mathbf{15}, 10, 12]$$$. </li></ul><p>In the second example, any operation with the second stone will not change its charge.</p></div>