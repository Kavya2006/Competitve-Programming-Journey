<h2><a href="https://codeforces.com/contest/1505/problem/C" target="_blank" rel="noopener noreferrer">1505C — Fibonacci Words</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1505C](https://codeforces.com/contest/1505/problem/C) |

## Topics
`*special` `implementation`

---

## Problem Statement

<div class="header"><div class="title">C. Fibonacci Words</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div></div><div class="input-specification"><div class="section-title">Input</div><p>The input consists of a single string of uppercase letters A-Z. The length of the string is between 1 and 10 characters, inclusive.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output "<span class="tex-font-style-tt">YES</span>" or "<span class="tex-font-style-tt">NO</span>".</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007778843513630498" id="id009015246393435221" class="input-output-copier">Copy</div></div><pre id="id007778843513630498">HELP
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0008134926495490757" id="id006403609468057864" class="input-output-copier">Copy</div></div><pre id="id0008134926495490757">YES
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006165118448708642" id="id0000046539223969077614" class="input-output-copier">Copy</div></div><pre id="id006165118448708642">AID
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0045737253743826745" id="id008716035402161528" class="input-output-copier">Copy</div></div><pre id="id0045737253743826745">NO
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id001747329548533919" id="id006408532091827224" class="input-output-copier">Copy</div></div><pre id="id001747329548533919">MARY
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0013153622464390624" id="id008294054858091467" class="input-output-copier">Copy</div></div><pre id="id0013153622464390624">NO
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006717932029663207" id="id0038218076052723704" class="input-output-copier">Copy</div></div><pre id="id006717932029663207">ANNA
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003307120937747805" id="id007068226582485532" class="input-output-copier">Copy</div></div><pre id="id003307120937747805">YES
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003130063937437516" id="id009579838934434868" class="input-output-copier">Copy</div></div><pre id="id003130063937437516">MUG
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00552356952208915" id="id007871918872060614" class="input-output-copier">Copy</div></div><pre id="id00552356952208915">YES
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00015343334433111866" id="id006673920710779664" class="input-output-copier">Copy</div></div><pre id="id00015343334433111866">CUP
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006172151468299907" id="id0011101294808718376" class="input-output-copier">Copy</div></div><pre id="id006172151468299907">NO
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006353221138357203" id="id005155686199060313" class="input-output-copier">Copy</div></div><pre id="id006353221138357203">SUM
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006379988482294586" id="id005476061464272403" class="input-output-copier">Copy</div></div><pre id="id006379988482294586">YES
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006480061016479606" id="id00010825726754113418" class="input-output-copier">Copy</div></div><pre id="id006480061016479606">PRODUCT
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008168928046914524" id="id004046653838629247" class="input-output-copier">Copy</div></div><pre id="id008168928046914524">NO
</pre></div></div></div>