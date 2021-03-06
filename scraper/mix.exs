defmodule Scraper.Mixfile do
  use Mix.Project

  def project do
    [app: :scraper,
     version: "0.1.0",
     elixir: "~> 1.3",
     build_embedded: Mix.env == :prod,
     start_permanent: Mix.env == :prod,
     deps: deps()]
  end

  def application do
    [applications: [:httpoison, :logger]]
  end

  defp deps do
    [
      {:httpoison, "~> 0.10.0"},
      {:poison, "~> 3.0"},

      {:bypass, "~> 0.1", only: :test}
    ]
  end
end
