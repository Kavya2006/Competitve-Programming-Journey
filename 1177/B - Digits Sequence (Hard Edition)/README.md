<h2><a href="https://codeforces.com/contest/1177/problem/B" target="_blank" rel="noopener noreferrer">1177B — Digits Sequence (Hard Edition)</a></h2>

| | |
|---|---|
| **Difficulty** | 1800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1177B](https://codeforces.com/contest/1177/problem/B) |

## Topics
`binary search` `divide and conquer` `implementation`

---

## Problem Statement

<div class="header"><div class="title">B. Digits Sequence (Hard Edition)</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Let's write all the positive integer numbers one after another from $$$1$$$ without any delimiters (i.e. as a single string). It will be the infinite sequence starting with <span class="tex-font-style-tt">123456789101112131415161718192021222324252627282930313233343536...</span></p><p>Your task is to print the $$$k$$$-th digit of this sequence.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first and only line contains integer $$$k$$$ ($$$1 \le k \le 10^{12}$$$) — the position to process ($$$1$$$-based index).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the $$$k$$$-th digit of the resulting infinite sequence.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0015548293512421563" id="id007237127235286317" class="input-output-copier">Copy</div></div><pre id="id0015548293512421563">7
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00747262335427828" id="id0014947937346519735" class="input-output-copier">Copy</div></div><pre id="id00747262335427828">7
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0025814173689688347" id="id00776377236852053" class="input-output-copier">Copy</div></div><pre id="id0025814173689688347">21
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0021970268127024006" id="id005293939532897926" class="input-output-copier">Copy</div></div><pre id="id0021970268127024006">5
</pre></div></div></div>