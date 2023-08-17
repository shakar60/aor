-- USH Universal - Universal shakars hub 
-- Credits to Karvine for helping

-- Library & Window

local ArrayField = loadstring(game:HttpGet('https://raw.githubusercontent.com/UI-Interface/ArrayField/main/Source.lua'))()
local Window = ArrayField:CreateWindow({
Name = "USH - Universal Shakars Hub",
LoadingTitle = "USH",
LoadingSubtitle = "by shakar60 and karvine for developing",
ConfigurationSaving = {
Enabled = true,
FolderName = nil, -- Create a custom folder for your hub/game
FileName = "USH"
},
Discord = {
Enabled = false,
Invite = "noinvitelink", -- The Discord invite code, do not include discord.gg/. E.g. discord.gg/ABCD would be ABCD
RememberJoins = true -- Set this to false to make them join the discord every time they load it up
},
KeySystem = false, -- Set this to true to use our key system
KeySettings = {
Title = "Get USH Key",
Subtitle = "Key System",
Note = "Get The Key",
FileName = "Key", -- It is recommended to use something unique as other scripts using ArrayField may overwrite your key file
SaveKey = true, -- The user's key will be saved, but if you change the key, they will be unable to use your script
GrabKeyFromSite = false, -- If this is true, set Key below to the RAW site you would like ArrayField to get the key from
Actions = {
[1] = {
Text = 'Click here to get the key <--',
OnPress = function()
https://raw.githubusercontent.com/shakar60/KeySystem.1/main/283
print('Pressed')
end,
}
},
Key = {"4Tv95jhwn82"} -- List of keys that will be accepted by the system, can be RAW file links (pastebin, github etc) or simple strings ("hello","key22")
}
})

-Notify

--1st Notify

local AkaliNotif = loadstring(game:HttpGet("https://raw.githubusercontent.com/Kinlei/Dynissimo/main/Scripts/AkaliNotif.lua"))();
local Notify = AkaliNotif.Notify;
Notify({
Description = "Join Discord https://discord.gg/UhceAu7y";
Title = "shakars hub Loaded";
Duration = 5;
});

--2nd Notify

game.StarterGui:SetCore("SendNotification", {
Title = "shakars hub Loaded"; 
Text = "Made by shakar#6955 and karvine"; 
Duration = 5; 
})

game.StarterGui:SetCore("SendNotification", {
Title = "Join discord"; 
Text = "https://discord.gg/UhceAu7y"; 
Duration = 10; 
})

--3rd Notify

local NotificationBindable = Instance.new("BindableFunction")

function NotificationBindable.OnInvoke(buttonPressed)
if buttonPressed == "Yeah" then
loadstring(game:HttpGet("https://raw.githubusercontent.com/AnthonyIsntHere/anthonysrepository/main/scripts/AntiChatLogger.lua"))()
elseif buttonPressed == "Nah im good" then
-- Do something when the Nah im good button is pressed
end
end

game.StarterGui:SetCore("SendNotification", {
Title = "Do You Want Anti Ban Script?",
Text = "Loads Anti Ban Script",
Button1 = "Yeah",
Button2 = "Nah im good",
Callback = NotificationBindable
})

Window:Prompt({
Title = 'USH HUB',
SubTitle = 'Warning',
Content = 'We are not responsible if you get banned. Click Accept to move on.',
Actions = {
Accept = {
Name = 'Accept',
Callback = function()
print('Pressed')
end,
}
}
})
