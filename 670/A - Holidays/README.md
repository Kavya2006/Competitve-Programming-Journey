<h2><a href="https://codeforces.com/contest/670/problem/A" target="_blank" rel="noopener noreferrer">670A — Holidays</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 670A](https://codeforces.com/contest/670/problem/A) |

## Topics
`brute force` `constructive algorithms` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Holidays</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>On the planet Mars a year lasts exactly <span class="tex-span"><i>n</i></span> days (there are no leap years on Mars). But Martians have the same weeks as earthlings — 5 work days and then 2 days off. Your task is to determine the minimum possible and the maximum possible number of days off per year on Mars.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains a positive integer <span class="tex-span"><i>n</i></span> (<span class="tex-span">1 ≤ <i>n</i> ≤ 1 000 000</span>) — the number of days in a year on Mars.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print two integers — the minimum possible and the maximum possible number of days off per year on Mars.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008466438941990246" id="id00014457974947792773" class="input-output-copier">Copy</div></div><pre id="id008466438941990246">14<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0031374714627597344" id="id007312768783470542" class="input-output-copier">Copy</div></div><pre id="id0031374714627597344">4 4<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0025572691445202833" id="id0035516687314878304" class="input-output-copier">Copy</div></div><pre id="id0025572691445202833">2<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006495519258677434" id="id003412374500209845" class="input-output-copier">Copy</div></div><pre id="id006495519258677434">0 2<br></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first sample there are <span class="tex-span">14</span> days in a year on Mars, and therefore independently of the day a year starts with there will be exactly <span class="tex-span">4</span> days off .</p><p>In the second sample there are only <span class="tex-span">2</span> days in a year on Mars, and they can both be either work days or days off.</p></div>