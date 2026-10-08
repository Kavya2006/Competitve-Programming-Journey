<h2><a href="https://codeforces.com/contest/1773/problem/F" target="_blank" rel="noopener noreferrer">1773F — Football</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1773F](https://codeforces.com/contest/1773/problem/F) |

## Topics
`constructive algorithms`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">F. Football</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>3 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>1024 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Scientists are researching an impact of football match results on the mood of football fans. They have a hypothesis that there is a correlation between the number of draws and fans' desire to watch football matches in the future.</p><p>In football, two teams play a match. The teams score goals throughout a match. A score "$$$x$$$<span class="tex-font-style-tt">:</span>$$$y$$$" means that the team we observe scored $$$x$$$ goals and conceded $$$y$$$ goals. If $$$x = y$$$, then the match ends in a draw. If $$$x  \gt  y$$$, then the observed team wins, and if $$$x  \lt  y$$$, then it loses.</p><p>To find out if there is a correlation, the scientists gathered information about the results of teams in lower leagues. The information they found is the number of matches played by the team ($$$n$$$), the number of goals scored in these matches ($$$a$$$), and the number of goals conceded in these matches ($$$b$$$). </p><p>You are given this information for a single team. You are asked to calculate the minimum number of draws that could have happened during the team's matches and provide a list of match scores with the minimum number of draws.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains an integer $$$n$$$ — the number of matches played by the team ($$$1 \le n \le 100$$$). The second line contains an integer $$$a$$$ — the total number of goals scored by the team in all $$$n$$$ matches ($$$0 \le a \le 1000$$$). The third line contains an integer $$$b$$$ — the total number of goals conceded by the team in all $$$n$$$ matches ($$$0 \le b \le 1000$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>In the first line, print a single integer $$$d$$$ — the minimum number of draws.</p><p>In the following $$$n$$$ lines, print a list of match scores, each line in the format "$$$x$$$<span class="tex-font-style-tt">:</span>$$$y$$$", where $$$x$$$ is the number of goals scored in the match, and $$$y$$$ – the number of goals conceded, so that exactly $$$d$$$ of these matches have ended in a draw. In case multiple such lists of match scores exist, print any of them.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Examples</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id004239917718633638" id="id006528767193442904" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id004239917718633638">3
2
4
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id009594685955255191" id="id0038879866772869687" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009594685955255191">0
1:0
1:2
0:2
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id003640095036075678" id="id0009362106107158807" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id003640095036075678">1
2
2
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id007583146581762994" id="id007984446847768691" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007583146581762994">1
2:2
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0019432469227004723" id="id0078875774540557" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0019432469227004723">4
0
7
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id00957993178713939" id="id007024732625110891" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00957993178713939">0
0:1
0:2
0:1
0:3
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id009678173557524996" id="id003711996001851243" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009678173557524996">6
3
1
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0023843006657014532" id="id0042805555728546607" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0023843006657014532">2
0:0
1:0
0:0
0:1
1:0
1:0</pre></div></div></div>