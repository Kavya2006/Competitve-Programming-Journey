<h2><a href="https://codeforces.com/contest/1250/problem/F" target="_blank" rel="noopener noreferrer">1250F — Data Center</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1250F](https://codeforces.com/contest/1250/problem/F) |

## Topics
`brute force` `implementation`

---

## Problem Statement

<div class="header"><div class="title">F. Data Center</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are developing a project to build a new data center. The data center will be a rectangle with an area of exactly $$$n$$$ square meters. Each side of the data center must be an integer.</p><p>Your goal is to minimize the impact of the external environment on the data center. For this reason, you want to minimize the length of the perimeter of the data center (that is, the sum of the lengths of its four sides).</p><p>What is the minimum perimeter of a rectangular data center with an area of exactly $$$n$$$ square meters, if the lengths of all its sides must be integers?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first and only line of the input contains an integer $$$n$$$ ($$$1 \le n \le 10^5$$$), where $$$n$$$ is the area of the data center in square meters.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the required minimum perimeter in meters.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00003964280702932199" id="id00647274643000876" class="input-output-copier">Copy</div></div><pre id="id00003964280702932199">36
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006019864834818601" id="id009152086338844153" class="input-output-copier">Copy</div></div><pre id="id006019864834818601">24
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004756153419179303" id="id007611548549104359" class="input-output-copier">Copy</div></div><pre id="id004756153419179303">13
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003522441313335941" id="id005447950120248777" class="input-output-copier">Copy</div></div><pre id="id003522441313335941">28
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002759597066982479" id="id00526834210531191" class="input-output-copier">Copy</div></div><pre id="id002759597066982479">1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0046315703280523257" id="id006960737996261794" class="input-output-copier">Copy</div></div><pre id="id0046315703280523257">4
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, the required shape of the data center is $$$6\times6$$$ square. Its area is $$$36$$$ and the perimeter is $$$6+6+6+6=24$$$.</p><p>In the second example, the required shape of the data center is $$$1\times13$$$ rectangle. Its area is $$$13$$$ and the perimeter is $$$1+13+1+13=28$$$.</p><p>In the third example, the required shape of the data center is $$$1\times1$$$ square. Its area is $$$1$$$ and the perimeter is $$$1+1+1+1=4$$$.</p></div>