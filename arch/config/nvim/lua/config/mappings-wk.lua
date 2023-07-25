local wk = require("which-key")

vim.g.mapleader = ","

local file = {
  ["<C-e>"] = { "<cmd>Telescope oldfiles<cr>", "Open Recent File" },
  --["<C-f>"] = { "<cmd>Telescope find_files<cr>", "Find File" },
  ["<leader>"] = {
    f = {
      name = "+file",
      b = { "<cmd>Telescope buffers<cr>", "Buffers" },
      f = { "<cmd>Telescope find_files<cr>", "Find File" },
      g = { "<cmd>Telescope live_grep<cr>", "Live Grep" },
      h = { "<cmd>Telescope help_tags<cr>", "Help Tags" },
      n = { "<cmd>enew<cr>", "New File" },
      r = { "<cmd>Telescope oldfiles<cr>", "Open Recent File" },
    },
    n = { "<cmd>NvimTreeToggle<cr>", "Tree Toggle" },
    x = { "<cmd>quit<cr>", "Quit" },
    w = { "<cmd>write<cr>", "Write" },
  },
}

local lsp = {
  ["<C-k>"] = { vim.lsp.buf.signature_help, "LSP Signature help" },
  ["<C-space>"] = { vim.lsp.buf.hover, "LSP Hover" },
  ["<space>"] = {
    c = {
      name = "+code",
      a = { vim.lsp.buf.code_action, "LSP Code Action" },
      r = { vim.lsp.buf.rename, "LSP Rename" },
    },
    f = { function() vim.lsp.buf.format { async = true } end, "LSP Format" },
    g = {
      name = "+go to",
      c = { vim.lsp.buf.declaration, "Go to Declaration" },
      d = { vim.lsp.buf.definition, "Go to Definition" },
      i = { vim.lsp.buf.implementation, "Go to Implementation" },
      r = { vim.lsp.buf.references, "Go to References" },
      t = { vim.lsp.buf.type_definition, "Go to Type Definition" },
    }
  },
  g = {
    name = "+go to",
    c = { vim.lsp.buf.declaration, "[LSP] Go to Declaration" },
    d = { vim.lsp.buf.definition, "[LSP] Go to Definition" },
    i = { vim.lsp.buf.implementation, "[LSP] Go to Implementation" },
    r = { vim.lsp.buf.references, "[LSP] Go to References" },
    t = { vim.lsp.buf.type_definition, "[LSP] Go to Type Definition" },
  }
}

local diagnostics = {
  ["<leader>"] = {
    e = {
      name = "+diagnostics",
      e = { vim.diagnostic.goto_next, "Diagnostics Next" },
      u = { vim.diagnostic.goto_prev, "Diagnostics Prev" },
      f = { vim.diagnostic.open_float, "Diagnostics Float" },
      l = { vim.diagnostic.setloclist, "Diagnostics List" },
    }
  }
}

local tabs = {
  ["<A-,>"] = { "<cmd>BufferPrevious<cr>", "Previous Buffer" },
  ["<A-.>"] = { "<cmd>BufferNext<cr>", "Next Buffer" },
  ["<A-c>"] = { "<cmd>BufferClose<cr>", "Close Buffer" },
  ["<A-p>"] = { "<cmd>BufferPin<cr>", "Pin Buffer" },
}

local floaterm = {
  t = { "<Cmd>FloatermToggle myfloat<CR>", "Toggle terminal"},
  ["<Esc>"] = { "<C-\\><C-n>:q<CR>",  "Close floatterm", mode = "t" }
}

local hop = {
  s = { "<cmd>HopChar1<cr>", "Hop Char 1", mode = "n" },
  l = { "<cmd>HopLineStart<cr>", "Hop Line Start", mode = {"n", "v"} },
}

local builtin = {
  ["<leader>"] = {
    m = { "<cmd>Man \"<cword>\"<cr>", "Look up Man Pages" }
  },
  ["<C-f>"] = { "za", "Toggle Fold" },
}

local ai = {
  ["<leader>"] = {
    a = {
      name = "+assistant",
      e = { "<cmd>ChatGPTEditWithInstructions<cr>", "Edit with instructions" }
    }
  }
}

local dap = {
  ["<leader>"] = {
    d = {
      name = "+DAP",
      d = { "<cmd>DapToggleBreakpoint<cr>", "Toggle Breakpoint" },
      t = { "<cmd>DapTerminate<cr>", "Terminate" },
      s = { "<cmd>DapStepOver<cr>", "Step Over" },
    }
  }
}

local noop = {
  s = { "s", "No Op", mode = "s" },  -- prevent changing mode in snippet expansion
  l = { "l", "No Op", mode = "s" },  -- prevent changing mode in snippet expansion
}

vim.g.codeium_no_map_tab = 1

local codeium = {
  ["<C-e>"] = { function () return vim.fn['codeium#Accept']() end, "Codeium Accept", mode = "i", expr = true },
}

wk.register(file)
wk.register(lsp)
wk.register(dap)
wk.register(diagnostics)
wk.register(tabs)
wk.register(floaterm)
wk.register(hop)
wk.register(ai)
wk.register(builtin)
wk.register(codeium)
wk.register(noop)

wk.setup({})