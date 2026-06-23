<h2><a href="https://codeforces.com/contest/2172/problem/A" target="_blank" rel="noopener noreferrer">2172A — ASCII Art Contest</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2172A](https://codeforces.com/contest/2172/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. ASCII Art Contest</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Three leading AI-powered creative assistants—Gemini, ChatGPT, and Claude—enter the first ever ASCII Art Contest, where they must impress a panel of human judges with their text-based masterpieces.</p><p>Each participant receives a score between 80 and 100 (inclusive). The organizers want to announce the final standing only if the judges' opinions are "close enough"; otherwise, they will ask the judges to reconsider.</p><p>Given the three integer scores of Gemini, ChatGPT, and Claude, determine the contest result:</p><ul> <li> If the maximum score and the minimum score differ by at least 10 points, print <span class="tex-font-style-tt">check again</span> (the judging seems inconsistent, so the panel must re-evaluate). </li><li> Otherwise, print <span class="tex-font-style-tt">final X</span>, where <span class="tex-font-style-tt">X</span> is the median of the three scores (the score that would be in the middle if all three were sorted in non-decreasing order). </li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>A single line contains three integers $$$g, c, \ell$$$, representing the scores of Gemini, ChatGPT, and Claude respectively.</p><ul> <li> $$$80\le g, c, \ell \le 100$$$ </li></ul></div><div class="output-specification"><div class="section-title">Output</div><p>Print the required answer in a line.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0049526956235016084" id="id00060748633698250454" class="input-output-copier">Copy</div></div><pre id="id0049526956235016084">88 94 95
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009271753302168072" id="id008376817742321326" class="input-output-copier">Copy</div></div><pre id="id009271753302168072">final 94
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006935029367192987" id="id0013589243191304423" class="input-output-copier">Copy</div></div><pre id="id006935029367192987">100 80 81
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003126550748847958" id="id004117028284430656" class="input-output-copier">Copy</div></div><pre id="id003126550748847958">check again
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007383576769592397" id="id007526197941257365" class="input-output-copier">Copy</div></div><pre id="id007383576769592397">98 99 98
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006112070560042606" id="id006144434504694434" class="input-output-copier">Copy</div></div><pre id="id006112070560042606">final 98
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0012024833103989929" id="id007271719027399206" class="input-output-copier">Copy</div></div><pre id="id0012024833103989929">95 86 85
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003997790017590028" id="id0024170487452554257" class="input-output-copier">Copy</div></div><pre id="id003997790017590028">check again
</pre></div></div></div>