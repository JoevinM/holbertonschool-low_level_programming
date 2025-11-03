# Advanced HTML

## Table of Contents
- [Table of Tasks](#table-of-tasks)  
- [Learning Objectives](#learning-objectives)  
- [Requirements](#requirements)  
- [Resources](#resources)  

---

## Table of Tasks

| #  | Task name                               | Description                                                                                        | File(s)                                          |
| -- | --------------------------------------- | -------------------------------------------------------------------------------------------------- | ------------------------------------------------ |
| 0  | Create your first webpage               | Initialize your first HTML file with the proper `<!DOCTYPE html>` declaration and basic structure. | `0-index.html`                                   |
| 1  | Structure your webpage                  | Add `<head>` and `<body>` sections to your HTML document.                                          | `1-index.html`                                   |
| 2  | The head - meta, title, favicon         | Add meta tags, viewport, title, description, and favicon links in the `<head>` section.            | `2-index.html`                                   |
| 3  | Simple header, main, footer             | Create the main layout structure using `<header>`, `<main>`, and `<footer>`.                       | `3-index.html`                                   |
| 4  | Aside                                   | Add an `<aside>` element to complement your main content.                                          | `article.html`                                   |
| 5  | Section                                 | Organize content with semantic `<section>` tags.                                                   | `5-index.html`                                   |
| 6  | Work, News, Testimonial articles        | Use `<article>` tags to display structured content for works, news, and testimonials.              | `6-index.html`                                   |
| 7  | Navigation                              | Add a `<nav>` element to the header to prepare your site navigation.                               | `7-index.html`                                   |
| 8  | Level 1 headings                        | Add a level 1 heading (`<h1>`) for your homepage title.                                            | `8-index.html`                                   |
| 9  | Level 2 headings                        | Add semantic level 2 headings (`<h2>`) to each section for hierarchy.                              | `9-index.html`                                   |
| 10 | Level 3 headings                        | Add level 3 headings (`<h3>`) to sub-sections and articles.                                        | `10-index.html`                                  |
| 11 | Styleguide                              | Create a style guide page to showcase headings and structure.                                      | `11-styleguide.html`                             |
| 12 | Paragraphs                              | Add semantic paragraphs (`<p>`) under each relevant heading.                                       | `12-index.html`                                  |
| 13 | Styleguide paragraphs                   | Extend the style guide with paragraph examples and subheadings.                                    | `13-styleguide.html`                             |
| 14 | Span                                    | Use `<span>` elements to highlight inline text (e.g., logo text).                                  | `14-index.html`                                  |
| 15 | Div                                     | Use `<div>` containers to group and structure HTML content.                                        | `15-index.html`                                  |
| 16 | Structure your sections                 | Add headers and nested `<div>` containers inside sections for better organization.                 | `16-index.html`                                  |
| 17 | Comments                                | Insert HTML comments for readability and structure identification.                                 | `17-index.html`                                  |
| 18 | Link your logo                          | Wrap your logo text in a clickable `<a>` tag linking to the homepage.                              | `18-index.html`                                  |
| 19 | Create new pages                        | Duplicate and adapt pages for About, News, and Contact sections.                                   | `about.html`, `latest_news.html`, `contact.html` |
| 20 | Add links                               | Build a full navigation menu with working anchors and links.                                       | `20-index.html`                                  |
| 21 | Add social media links                  | Add footer links to Facebook, Twitter, and Instagram.                                              | `21-index.html`                                  |
| 22 | “Button” links                          | Add call-to-action links styled as buttons within sections.                                        | `22-index.html`                                  |
| 23 | Services, Works, Latest news links      | Wrap section titles in `<a>` tags to make them clickable.                                          | `23-index.html`                                  |
| 24 | List the links                          | Convert header and footer links into unordered lists (`<ul>`).                                     | `24-index.html`                                  |
| 25 | Secondary navigation menu               | Add a secondary footer menu with links for Terms, Privacy, and Cookies.                            | `25-index.html`                                  |
| 26 | Examples of lists for the styleguide    | Add examples of unordered, ordered, and definition lists to the style guide.                       | `26-styleguide.html`                             |
| 27 | Separate content                        | Insert horizontal rules (`<hr>`) and copyright text in the footer.                                 | `27-index.html`                                  |
| 28 | Horizontal rule example                 | Showcase the use of `<hr>` in the style guide.                                                     | `28-styleguide.html`                             |
| 29 | Client quotes                           | Add blockquotes with citations in the Testimonials section.                                        | `29-index.html`                                  |
| 30 | Examples of quotes                      | Add inline and blockquote examples to the style guide.                                             | `30-styleguide.html`                             |
| 31 | Address and latest news authors         | Add a footer address and author names to articles using `<small>`.                                 | `31-index.html`                                  |
| 32 | Typography section                      | Add typography examples with `<pre>`, `<code>`, and highlighted text.                              | `32-styleguide.html`                             |
| 33 | Table                                   | Build a complete `<table>` with column and row headers using proper `scope` attributes.            | `33-styleguide.html`                             |
| 34 | Details                                 | Add collapsible `<details>` and `<summary>` examples.                                              | `34-styleguide.html`                             |
| 35 | Replace text logo with image logo       | Replace the text logo with an image (`logo-black.png`) in header and footer.                       | `35-index.html`                                  |
| 36 | Add images to your sections             | Add illustrative images to Works, About, News, and Testimonials sections.                          | `36-index.html`                                  |
| 37 | Social icons                            | Replace social media text with SVG icons for Facebook, Twitter, and Instagram.                     | `index.html`                                     |
| 38 | Add a video player in the styleguide    | Embed a looping video with thumbnail preview and controls.                                         | `38-styleguide.html`                             |
| 39 | Add an audio player in the styleguide   | Add an audio player with controls and fallback text.                                               | `39-styleguide.html`                             |
| 40 | Add an iframe example in the styleguide | Embed a YouTube video using `<iframe>` with title, width, and height.                              | `styleguide.html`                                |

---

## Learning Objectives

-By the end of this project, you should be able to explain to anyone, without Google:

-The main guidelines to follow for valid, semantic HTML

-How to create the skeleton of an HTML5 page

-How to use semantic HTML tags to structure web content

-When to use <div> vs <span>

-The semantic value of tags like <header>, <main>, <footer>, <article>, <nav>, <section>, <aside>

-How to use headings hierarchically (<h1> → <h6>)

-How to build lists: ordered, unordered, and definition lists

-The differences between media types (SVG, GIF, PNG, JPG)

-How to structure data in tables

-How to embed videos, audio, and external content (iframe)

-How to correctly structure and comment an HTML document

## Requirements

### General
- A README.md file at the root of the project folder is mandatory
- All code must be W3C compliant and validate with W3C Validator
- Use only HTML5 syntax (no CSS or JS for this project)
- The company name used across all pages is Techium
- Maintain semantic consistency (correct tag usage and structure) 
- Pay attention to case sensitivity and spelling — HTML is case-insensitive but best practices require lowercase 

---

## Resources

Read or watch:  
- [HTML 5.2](https://html.spec.whatwg.org/multipage/)  
- [HTML: HyperText Markup Language | MDN](https://developer.mozilla.org/en-US/docs/Web/HTML)  
- [HTML Reference - A free guide to all HTML elements and attributes](https://htmlreference.io/)  
- [Can I use… Support tables for HTML5, CSS3, etc](https://caniuse.com/)  
- [HTML Cheat Sheet - WebsiteSetup](https://websitesetup.org/html5-cheat-sheet/)
