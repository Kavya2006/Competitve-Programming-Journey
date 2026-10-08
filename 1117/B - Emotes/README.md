<h2><a href="https://codeforces.com/contest/1117/problem/B" target="_blank" rel="noopener noreferrer">1117B — Emotes</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1117B](https://codeforces.com/contest/1117/problem/B) |

## Topics
`greedy` `math` `sortings`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Emotes</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>There are $$$n$$$ emotes in very popular digital collectible card game (the game is pretty famous so we won't say its name). The $$$i$$$-th emote increases the opponent's happiness by $$$a_i$$$ units (we all know that emotes in this game are used to make opponents happy).</p><p>You have time to use some emotes only $$$m$$$ times. You are allowed to use any emotion once, more than once, or not use it at all. The only restriction is that you <span class="tex-font-style-bf">cannot use the same emote more than $$$k$$$ times in a row</span> (otherwise the opponent will think that you're trolling him).</p><p><span class="tex-font-style-bf">Note that two emotes $$$i$$$ and $$$j$$$ ($$$i \ne j$$$) such that $$$a_i = a_j$$$ are considered different</span>.</p><p>You have to make your opponent as happy as possible. Find the maximum possible opponent's happiness.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line of the input contains three integers $$$n, m$$$ and $$$k$$$ ($$$2 \le n \le 2 \cdot 10^5$$$, $$$1 \le k \le m \le 2 \cdot 10^9$$$) — the number of emotes, the number of times you can use emotes and the maximum number of times you may use the same emote in a row.</p><p>The second line of the input contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^9$$$), where $$$a_i$$$ is value of the happiness of the $$$i$$$-th emote.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>Print one integer — the maximum opponent's happiness if you use emotes in a way satisfying the problem statement.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Examples</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id006081451322006739" id="id007075466316361304" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006081451322006739">6 9 2
1 3 3 7 4 2
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id009704246508069604" id="id00944081083356811" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009704246508069604">54
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0011926613773793315" id="id008042580029639248" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0011926613773793315">3 1000000000 1
1000000000 987654321 1000000000
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id008077239121548229" id="id0038504264115133735" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id008077239121548229">1000000000000000000
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first example you may use emotes in the following sequence: $$$4, 4, 5, 4, 4, 5, 4, 4, 5$$$.</p></div>