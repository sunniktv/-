import discord
from discord.ext import commands

bot = commands.Bot(command_prefix='!')

@bot.event
async def on_ready():
    print('Logged in as')
    print(bot.user.name)
    print(bot.user.id)
    print('------')

@bot.command()
async def ping(ctx):
    await ctx.send('pong')

bot.run('token')

@bot.command()
async def 도움말(ctx):
    await ctx.send('궁금한게 뭐냐?!')@bot.command(name="s")
async def _s(ctx):
    await ctx.send("s")
