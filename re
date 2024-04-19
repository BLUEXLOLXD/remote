local stag = 'One'
game.Players.LocalPlayer.Character.Remotes.KeyEvent:FireServer(key, stag, "Down", CFrame.new(), CFrame.new())
spawn(function()
    while wait() do
        if game.Players.LocalPlayer.Character:FindFirstChild("Humanoid") and game.Players.LocalPlayer.Character.Humanoid.Health == 0 then
	        repeat wait() until game.Players.LocalPlayer.PlayerGui:FindFirstChild("SpawnSelection")--or wait(3)
            repeat wait() until not game.Players.LocalPlayer.PlayerGui:FindFirstChild("SpawnSelection")--or wait(3)
            wait(1)
            repeat wait() until game.Players.LocalPlayer.Character:FindFirstChild("Remotes")
	        game.Players.LocalPlayer.Character.Remotes.KeyEvent:FireServer(key, stag, "Down", CFrame.new(), CFrame.new())
        end
    end
end)
