void gen_substring()
{
	string s, t;cin >> s;
	for (int i = 0;i < s.size();i++)
	{
		t = "";
		for (int j = i;j < s.size();j++)
		{
			t += s[j];
			cout << t << endl;
		}
	}
}
