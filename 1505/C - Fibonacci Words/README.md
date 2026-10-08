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

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">C. Fibonacci Words</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The input consists of a single string of uppercase letters A-Z. The length of the string is between 1 and 10 characters, inclusive.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>Output "<span class="tex-font-style-tt">YES</span>" or "<span class="tex-font-style-tt">NO</span>".</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Examples</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0023092434738177114" id="id007701515976620312" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0023092434738177114">HELP
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id001160958034635794" id="id0025790428533138665" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id001160958034635794">YES
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id004555566494496931" id="id0021131350599583298" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id004555566494496931">AID
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id009154770672817326" id="id009415787960976792" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009154770672817326">NO
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0026773043925958295" id="id008737480720431108" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0026773043925958295">MARY
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id009042626753314312" id="id009594165977403314" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009042626753314312">NO
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id001371495450568957" id="id0042973986186621604" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id001371495450568957">ANNA
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0013107146105184664" id="id0044450959922403877" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0013107146105184664">YES
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0017385702736409214" id="id008258843001061579" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0017385702736409214">MUG
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0009935112375364774" id="id009190054384966204" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0009935112375364774">YES
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id004668115015951195" id="id009204502990614355" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id004668115015951195">CUP
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0013478579951626835" id="id0045640443763175487" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0013478579951626835">NO
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0004595715680650658" id="id005145935505958196" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0004595715680650658">SUM
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id007996725351774271" id="id006768366006199472" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007996725351774271">YES
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0032024168906628436" id="id003277770796057893" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0032024168906628436">PRODUCT
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id00014091482120961896" id="id0024350638073944852" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00014091482120961896">NO
</pre></div></div></div>