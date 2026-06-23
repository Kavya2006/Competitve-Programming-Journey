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

<div class="header"><div class="title">F. Football</div><div class="time-limit"><div class="property-title">time limit per test</div>3 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>1024 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Scientists are researching an impact of football match results on the mood of football fans. They have a hypothesis that there is a correlation between the number of draws and fans' desire to watch football matches in the future.</p><p>In football, two teams play a match. The teams score goals throughout a match. A score "$$$x$$$<span class="tex-font-style-tt">:</span>$$$y$$$" means that the team we observe scored $$$x$$$ goals and conceded $$$y$$$ goals. If $$$x = y$$$, then the match ends in a draw. If $$$x  \gt  y$$$, then the observed team wins, and if $$$x  \lt  y$$$, then it loses.</p><p>To find out if there is a correlation, the scientists gathered information about the results of teams in lower leagues. The information they found is the number of matches played by the team ($$$n$$$), the number of goals scored in these matches ($$$a$$$), and the number of goals conceded in these matches ($$$b$$$). </p><p>You are given this information for a single team. You are asked to calculate the minimum number of draws that could have happened during the team's matches and provide a list of match scores with the minimum number of draws.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$n$$$ — the number of matches played by the team ($$$1 \le n \le 100$$$). The second line contains an integer $$$a$$$ — the total number of goals scored by the team in all $$$n$$$ matches ($$$0 \le a \le 1000$$$). The third line contains an integer $$$b$$$ — the total number of goals conceded by the team in all $$$n$$$ matches ($$$0 \le b \le 1000$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>In the first line, print a single integer $$$d$$$ — the minimum number of draws.</p><p>In the following $$$n$$$ lines, print a list of match scores, each line in the format "$$$x$$$<span class="tex-font-style-tt">:</span>$$$y$$$", where $$$x$$$ is the number of goals scored in the match, and $$$y$$$ – the number of goals conceded, so that exactly $$$d$$$ of these matches have ended in a draw. In case multiple such lists of match scores exist, print any of them.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0028345631615401434" id="id006805070991151708" class="input-output-copier">Copy</div></div><pre id="id0028345631615401434">3
2
4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008187794145057602" id="id004086047088387288" class="input-output-copier">Copy</div></div><pre id="id008187794145057602">0
1:0
1:2
0:2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00831577731320381" id="id007157344083824162" class="input-output-copier">Copy</div></div><pre id="id00831577731320381">1
2
2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003862568724647384" id="id003591539041278752" class="input-output-copier">Copy</div></div><pre id="id003862568724647384">1
2:2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008945156243554631" id="id004813741211849213" class="input-output-copier">Copy</div></div><pre id="id008945156243554631">4
0
7
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006620891738093054" id="id0026868699979868715" class="input-output-copier">Copy</div></div><pre id="id006620891738093054">0
0:1
0:2
0:1
0:3
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0029073045189800817" id="id006423476782434194" class="input-output-copier">Copy</div></div><pre id="id0029073045189800817">6
3
1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007322643238325944" id="id004484235771108781" class="input-output-copier">Copy</div></div><pre id="id007322643238325944">2
0:0
1:0
0:0
0:1
1:0
1:0</pre></div></div></div>